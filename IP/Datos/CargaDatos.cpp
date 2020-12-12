//Poner estos includes al princpio del programa
#include <stdio.h>
#include <stdlib.h>

// poner este define al principio del programa tras los includes
#define NOMBRE "datos.txt"


//Este es el prototipo de la función de abajo. Colocar en la zona de prototipos
void cargaDatos(int v[], int &n);


//funcion CARGA_DATOS
//Esta función devueve en un array v los n numeros enteros contenidos en el archivo NOMBRE
//n es un parametro de salida que indica el numero de datos que habia en el archivo
//v es un array de e/s de enteros de cualquier tamaño. El tamaño debe ser menor o igual que n
void cargaDatos(int v[], int &n)
{
 int ok;
 FILE *f;
 
 f=fopen(NOMBRE,"r");
 if (f==NULL)
 {
   printf("Error abriendo archivo %s. Pulsa una tecla... ",NOMBRE);
   getchar();
   exit(1);
 }
 else
  printf("Archivo %s abierto con exito.\n",NOMBRE);

 n=0;
 while (fscanf(f,"%d",&v[n]==1)
  n++;
 
 printf("Datos leidos: %d \n",n);
 fclose(f);
}


