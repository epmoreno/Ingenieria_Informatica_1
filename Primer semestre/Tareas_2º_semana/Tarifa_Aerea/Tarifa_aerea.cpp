#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double tarifa_B = 150;
    double km_cost = 0.1;
    double apl_incremento;
    double km;


    cout << "Introduce los Km a viajar:" << endl;
    cin >> km;

    apl_incremento = 150+(km*0.1);

    cout << "El coste por los kilometros recorridos son: " << apl_incremento << endl;





}