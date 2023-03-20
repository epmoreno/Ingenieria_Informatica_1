#include <iostream>
using namespace std;

//EJERCICO Nº4
#define MAXSIZE 3
void printvi(int *values, int max){

    for (int i = 0; i < max; i++)
    {
        printf("%d ",values[i]);
    }
    printf("\n");
    
}
void printmi(int (values[][MAXSIZE]), int maxfila, int maxcol){
    for (int i = 0; i < maxfila; i++)
    {
        printvi(values[i], maxcol);
    }
    
}

    /**
     * Hemos creado dos funciones
     * con la primera vamos a leer los datos que tenemos en las filas y una vez terminada la primera fila pasamos a la siguiente "\n"
     * y con la segunda llamamos a la funcion anterior pero esta vez accede a los datos de la matriz por referencia.
    */
    /**
     * Una vez en el main solo faltaria crear la matriz y llamar a la funcion añadiendo las variables
    */

int main(){
   int arr[6][MAXSIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
   printmi(arr,3,MAXSIZE);//Podemos elegir las filas que queremos ver. Las columnas iran definidas arriba y son inamobibles
   return 0;
}