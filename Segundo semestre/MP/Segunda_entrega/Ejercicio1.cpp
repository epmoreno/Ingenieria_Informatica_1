#include <iostream>

using namespace std;

int main(){
    int n;
    string *v;

    cout<<"¿Cuantas palabras vas a introducir?"<<endl;
    cin >> n;

    //RESERVAMOS
    v= new string [n];

    //GUARDAMOS
    for (int i = 0; i < n; i++)
    {
        cout << "¿Que palabra quieres introducir en el espacio "<< i <<" ?"<<endl;
        cin >> v[i];
    }

    //LEEMOS
    for (int i= n-1; i >= 0; i--){ // Escritura del vector dinamico
        cout << " | " << v[i];
    }
    cout << " |"<< endl;

    delete [] v;
    v = 0;
}   