#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double radarF;
    double radarM;
    double velocidadIF, velocidadIM;
    const double meRadarF = 5;
    const double meRadarM = 7;

    cout << "¿A cuanto le ficho el Radar Fijo?" << endl;
    cin >> radarF;
    const double meRadarF_1 = (5*radarF)/100;
    
    cout << "¿A cuanto le ficho el Radar Movil?" << endl;
    cin >> radarM;
    const double meRadarM_1 = (7*radarM)/100;

    if(radarF <= 100){
        velocidadIF = radarF - meRadarF ;
    }else{
        velocidadIF = radarF - meRadarF_1 ;
    }
    
    if(radarM <= 100){
        velocidadIM = radarM - meRadarM ;
    }else{
        velocidadIM = radarM - meRadarM_1 ;
    }

    cout << "Velocidad Imputada Radar Fijo: "<< velocidadIF << endl;
    cout << "Velocidad Imputada Radar Movil: "<< velocidadIM << endl;
}