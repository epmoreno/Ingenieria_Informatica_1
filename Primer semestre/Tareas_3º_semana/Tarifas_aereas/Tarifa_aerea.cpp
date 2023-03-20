#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double tarifa_B = 150;
    double km_cost = 0.10;
    double apl_incremento;
    double km;


    cout << "Introduce los Km a viajar:" << endl;
    cin >> km;

    if(km <= 300){
        cout << "El precio por no sobrepasar los 300 km es de : " << tarifa_B <<endl;
    }else{
        apl_incremento = 150+((km-300)*km_cost);
        cout << "El coste por superar los 300 km recorridos son: " << apl_incremento << endl;
    }

}