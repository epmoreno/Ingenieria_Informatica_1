#include <iostream>

using namespace std;

void repite_items(int *&values, int &size){

    /**
     * ASIGNAMOS NUEVA MEMORIA (Suma total de los resultados)
    */
    int nueva_memoria;
    for (int i = 0; i < size; i++)
    {
        nueva_memoria += values[i];
    }

    /**
     * CREAMOS NUEVO VERCTOR CON EL TAMAÑO QUE NECESITAMOS
    */
    int *vaux = new int [nueva_memoria];

    /**
     * INTRODUCIMOS DATOS
    */
   
    //int aux;
    for (int i = 0; i < nueva_memoria; i++)
    {
        //aux = 0;
        for (int j = i; j < values[i]; j++)
        {   
            if (values[i] > 0)
            {
                vaux[j] = values[i];
            }
           //aux=j;
        }
    }

    
    /**
     * LIBERAMOS MEMORIA DEL PRIMER VECTOR
    */
    delete [] values;
    size = nueva_memoria;
    values = 0;
    values = new int [nueva_memoria];
    
    /**
     * PASAMOS LOS VALORES A NUESTRO VECTOR
    */
    for (int i = 0; i < nueva_memoria; i++)
    {
       values[i]=vaux[i];
    }
     
    
}

int main(){
    int *v;
    int n = 1;

    //RESERVAMOS
    v = new int [n];

    for (int i = 0; i < n; i++)
    {
        cout << "¿Que numero quieres meter en la posicion " << i+1 << " ?" <<endl;
        cin >> v[i];
    }


    repite_items(v, n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    


}