int myVar = 3;

int main() {
    // Suma 5 (3 + 5 = 8)
    myVar += 5;
    // Desplaza 2 bits a la izquierda (8 << 2 = 32)
    myVar = myVar << 2;
    // Multiplica por 2 (32*2 = 64)
    myVar = myVar * 2;
    // Resta 1 (64-1 = 63)
    --myVar;
    return myVar; // Resultado: 63 (ver con 'echo $?' en el shell)
}
