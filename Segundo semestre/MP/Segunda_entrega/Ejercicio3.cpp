#include <iostream>

using namespace std;

int main(){
    int **matriz;
    int n=3, m=3;

    /**
    * Reservamos los espacios de las filas y las columnas
    */
    matriz = new int*[n];
    for (int i = 0; i < n; i++)
    {
        matriz[i] = new int[m];
    }
    
    /**
    * Vamos a meter los datos
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Que numero quieres meter en la posicion ["<<i<<"]"<<"["<<j<<"]" << endl;
            cin >> matriz[i][j];
        }
    }

    /**
    * Vamos a sumar los datos de las columnas
    */
  int suma[m] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma[j] += matriz[i][j];
        }
    }

    /**
    * Comparación de los datos sumados
    */
    cout<< " " <<endl;
    int mayor = suma[0];
    for (int i = 0; i < m; i++)
    {
        //cout << suma[i] << endl; -> //VER LOS RESULTADOS DE LAS SUMAS
        if (suma[i] > mayor)
        {
            mayor = suma[i];
        }
            
    }

    /**
    * Vamos a leer el resultado
    */
    for (int i = 0; i < m; i++)
    {
        if (suma[i] == mayor)
        {
            cout << "La columa que suma mayores valores es: "<<i+1<<
            " con el resultado: "<<mayor<<endl;
        }
    }
    
   /**
    * Vamos a liberar la matriz
   */
    for (int i = 0; i < n; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
    matriz = 0;
    
}