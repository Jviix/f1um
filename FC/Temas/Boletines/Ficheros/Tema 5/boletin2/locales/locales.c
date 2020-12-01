#include <stdio.h>

// Max stack size by default is 8MB (ulimit -a | grep stack)

#define ARRAY_SIZE (1 << 19) // 512K elements of 4 bytes = 2 MiB each

#define MAGIC_NUMBER 1234

int doble_mult(int parametro) {
    // Mientras el programa está pausado, ejecutar en otra terminal:
    // pmap $(ps a | grep locales | grep -v grep | cut -d " " -f2) | grep pila
    printf("Pulsa INTRO para continuar...");
    getchar();
    getchar();
    return parametro*2;
}

int doble_array_base(int parametro) {
    int un_array[ARRAY_SIZE];
    int i, res;

    for(i=0; i < ARRAY_SIZE; i++) {
        un_array[i] = parametro;
    }
    
    res = doble_mult(parametro);
    
    for(i=0; i < ARRAY_SIZE; i++) {
        res += un_array[i];
    }
    return res;
}

int doble_array(int parametro) {
    int otro_array[ARRAY_SIZE];
    int i, res;

    for(i=0; i < ARRAY_SIZE; i++) {
        otro_array[i] = parametro;
    }
    res = doble_array_base(parametro);

    for(i=0; i < ARRAY_SIZE; i++) {
        res += otro_array[i];
    }
    return res / ARRAY_SIZE;
}

int main() {
    printf("PID: %d\n", getpid());
    printf("Introduce un número: ");
    int myInt;
    int ret = scanf("%d", &myInt);
    if (ret != 1) {
        printf("Error al leer de teclado\n");
        return 1;
    }
    int res;
    if (myInt == MAGIC_NUMBER) {
        // Una manera muy rocambolesca de calcular el doble
        res = doble_array(myInt);
    }
    else {
        // Devuelve el doble del valor pasado como parámetro
        res = doble_mult(myInt);
    }
    printf("El doble de %d es: %d\n", myInt, res);
    return 0;
}
