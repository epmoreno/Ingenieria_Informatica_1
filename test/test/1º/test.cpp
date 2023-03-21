#include <iostream>
using namespace std;

void repite_items(int *&values, int &size) {
    // Crear un nuevo vector con el tamaño necesario para contener todos los elementos repetidos
    int new_size = 0;
    for (int i = 0; i < size; i++) {
        new_size += values[i];
    }
    int* new_values = new int[new_size];
    
    // Copiar cada elemento del vector original tantas veces como su valor lo indique
    int k = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < values[i]; j++) {
            new_values[k++] = values[i];
        }
    }
    
    // Liberar la memoria ocupada por el vector original y asignarle el nuevo vector
    delete[] values;
    values = new_values;
    size = new_size;
}
int main() {
    int size = 3;
    int* values = new int[size];
    values[0] = 3;
    values[1] = 5;
    values[2] = 1;
    
    repite_items(values, size);
    
    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";
    }
    cout << endl;
    
    delete[] values;
    return 0;
}