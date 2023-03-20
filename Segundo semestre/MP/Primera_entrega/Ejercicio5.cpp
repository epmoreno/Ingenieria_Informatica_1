#include <iostream>
const int MAXSIZE = 3;
void printreversemi(int (values[][MAXSIZE]), int maxfila, int maxcol){
    
    printf("\n");
    printf("Su matriz antes : ");
    printf("\n");

    for (int i = 0; i < maxfila; i++)
    {
        for (int j = 0; j < maxcol; j++)
        {
            printf("%d ",values[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("Su matriz despues : ");
    printf("\n");

    for (int i = MAXSIZE-1; i >= 0; i--)//el orden de las filas estara invertida
    {
        for (int j = 0; j < maxcol; j++)//el orden de las columnas sera el mismo
        {
            printf("%d ",values[i][j]);
        }
        printf("\n");
        
    }
    
}

int main(){
    int m[MAXSIZE][MAXSIZE] =   {   {1,2,3},    {4,5,6},    {7,8,9}     };

    printreversemi(m,MAXSIZE,MAXSIZE);
}

