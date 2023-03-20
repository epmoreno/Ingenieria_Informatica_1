#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double puntos_altos = 0.04;
    double trayecto_largo = 0.02;
    double coste_bllt;
    double descnt1;
    double descnt2;
    double descnt3;

    cout << "Introduce el coste de su billete:" << endl;
    cin >> coste_bllt;

    descnt1 = coste_bllt-(coste_bllt*puntos_altos);
    descnt2 = coste_bllt-(coste_bllt*trayecto_largo);
   
    cout << "El coste por acumulación de puntos de cliente es: " << descnt1 << endl;
    cout << "El coste por trayecto largo es: " << descnt2 << endl;
}