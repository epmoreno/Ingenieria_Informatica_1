#include <iostream>
using namespace std;

//EJERCICIO Nº1
int main(int argc, char *argv[]) {
int var = 5;
int *p1, *p2;
// Modifica la variable var usando p1

*p1 = 1;
var = var + *p1;
cout << "a) Modifica la variable var usando p1 : " << var << endl; //6
cout << endl;

// Crea un segundo puntero p2 que apunte a p1

p2 = p1;
cout << "b) Crea un segundo puntero p2 que apunte a p1 : " << *p2 << endl; //6
cout << endl;

// Modifica var usando p2

var = var + *p2;
cout << "c) Modifica var usando p2 : " << var << endl; //12
cout << endl;

return 0;
}