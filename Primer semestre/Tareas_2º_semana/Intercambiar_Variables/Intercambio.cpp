#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double caja_derecha;
    double caja_izquierda;

    cout << "introduce valores a las cajas: "<<endl;
    cin >> caja_derecha >> caja_izquierda;

    double cajaizq = caja_izquierda;
    double cajadch = caja_derecha;

    cout <<"Su caja derecha contiene: "<<caja_derecha<<endl;
    cout <<"Su caja izquierda contiene: " <<caja_izquierda<<endl;
    
    caja_derecha = cajaizq;
    caja_izquierda =  cajadch;

    cout << "Su caja derecha ahora contiene: "<<caja_derecha<<endl;
    cout << "Su caja izquierda ahora contiene: "<<caja_izquierda<<endl;
}