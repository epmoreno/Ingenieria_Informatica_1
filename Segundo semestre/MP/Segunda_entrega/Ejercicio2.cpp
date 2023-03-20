#include <iostream>
#include <cstdlib>

using namespace std;
/*struct Palabra
{
    char plb[80];
    Palabra *sig;
};*/

int main(){
    int f;//fila y columna
    char **p;//matriz que haremos
    
    cout<<"¿Cuantas palabras vas a introducir?"<<endl;
    cin >> f;

    //RESERVAMOS EL Nº DE PALABRAS QUE VAMOS A INTRODUCIR
    p= (char **) malloc(f * sizeof(char*));

    //GUARDAMOS

    for (int i = 0; i < f; i++)
    {   
        p[i] = (char *)malloc(50 * sizeof(char));
        cout << "¿Que palabra quieres introducir en el espacio "<< i+1 <<" ?"<<endl;
        cin >> p[i];
    }

    //LEEMOS
    for (int i= f-1; i >= 0; i--){ // Escritura del vector dinamico

        cout << " | " << p[i];
        free(p[i]);
        
    }
    free(p);
    cout << " |"<< endl;
}