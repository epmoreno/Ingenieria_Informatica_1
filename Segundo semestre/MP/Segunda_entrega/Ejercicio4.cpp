#include <iostream>

using namespace std;

void repite_items(int *&values, int &size){
    // ASIGNAMOS NUEVA MEMORIA (Suma total de los resultados)
    int nueva_memoria = 0;
    for (int i = 0; i < size; i++)
    {
        nueva_memoria += values[i];
    }
    int *vaux = new int [nueva_memoria];

    // INTRODUCIMOS DATOS TANTAS VECES COMO VALOR TENGA
    int aux = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < values[i]; j++)
        {   
            vaux[aux++] = values[i];
        }
    }
    
    // LIBERAMOS MEMORIA DEL PRIMER VECTOR
    delete [] values;
    values = vaux; //-> apuntamos hacia los valores nuevos
    size = nueva_memoria; //-> Cambiamos el tamaño del vector por el nuevo
}

int main(){
    int *v;
    int n;

    // RESERVAMOS
    v = new int [n];

    cout << "¿Cuantos numeros quieres meter?" <<endl;
    cin >> n;
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
    cout << endl;

    // LIBERAMOS
    delete[] v;
    return 0;

}