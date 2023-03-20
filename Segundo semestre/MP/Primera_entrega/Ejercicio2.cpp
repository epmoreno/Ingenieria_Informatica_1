#include <iostream>
using namespace std;

//EJERCICIO Nº2
int main (){
    const int max_alumnos = 6;
    int calificaciones[max_alumnos] = {7, 5, -1, 5, -2, 5};
    int *p = calificaciones;

    for (int i = 0; i < 6; i++)
    {
        if (p[i] < 0){
            p[i]=0;
        }
        cout<<p[i]<<" ";
    }
}