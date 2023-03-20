#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double hora1;
    double hora2;
    double minuto1;
    double minuto2;
    double segundo1;
    double segundo2;

    cout <<"Introduzca Hora(24h), Minutos(60m) y Segundos(s) del primer instante: " <<endl;
    cin >> hora1 >> minuto1 >> segundo1;

    cout <<"Introduzca Hora(24h), Minutos(60m) y Segundos(s) del segundo instante: " <<endl;
    cin >> hora2 >> minuto2 >> segundo2;

    double hora_minuto1 = hora1*60;
    double sumah1 = hora_minuto1 + minuto1;
    double hora_minuto2 = hora2*60;
    double sumah2 = hora_minuto2 + minuto2;
    double minuto_segundo1 = sumah1*60;
    double sumam1 = minuto_segundo1+segundo1;
    double minuto_segundo2 = sumah2*60;
    double sumam2 = minuto_segundo2+segundo2;

    double restaf = sumam2-sumam1;

    cout << "El tiempo que hay de diferencias en segundos es: " << restaf <<endl;


    
    

}