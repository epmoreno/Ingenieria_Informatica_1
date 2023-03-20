//VARIACION PORCENTUAL

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double vInicial;
    double vFinal;

    cout << "Introduce el primer valor\n";
    cin >> vInicial;
    cout << "Introduce el valor final\n";
    cin >> vFinal;

    double variacionP = abs(100*(vFinal-vInicial)/vInicial);


    cout <<"Valor Porcentual: ";
    cout << variacionP;
}