#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int puntos;
    double km;
    double puntos_altos;
    double trayecto_largo;
    double tarifa_B = 150;
    double km_cost = 0.10;
    double apl_incremento;
    double costFinal;

    cout << "Introduce el trayecto en KM del vuelo:" << endl;
    cin >> km;

    cout << "Introduce los puntos de clientes:" << endl;
    cin >> puntos;

    if(km > 300){
        apl_incremento = 150+((km-300)*km_cost); 
    }else{
        apl_incremento = tarifa_B;
    }

    if (puntos >=100 && puntos <= 199){
        puntos_altos = 0.03;
    }else if(puntos >= 200){
        puntos_altos = 0.04;
    }else{
        cout << "No tiene descuento pot puntos" << endl;
    }

    if (km > 700){
        trayecto_largo = 0.02;
    }
    
    costFinal = apl_incremento -(apl_incremento*(puntos_altos+trayecto_largo));

    cout << "El coste final de su billete es de :" << costFinal << endl;
   
}