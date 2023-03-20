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

    //hora a minuto y sumamos los minutos introducidos
    double hora_minuto1 = hora1*60;
    double sumah1 = hora_minuto1 + minuto1;

    double hora_minuto2 = hora2*60;
    double sumah2 = hora_minuto2 + minuto2;

    //minuto a segundos y sumamos los segundos introducidos
    double minuto_segundo1 = sumah1*60;
    double sumam1 = minuto_segundo1+segundo1;

    double minuto_segundo2 = sumah2*60;
    double sumam2 = minuto_segundo2+segundo2;

    if ((sumam1<sumam2)&&(sumah1<sumah2))
    {
        cout << "El primer instante es anterior al segundo" <<endl;
    }else if ((sumam1>sumam2)&&(sumah1>sumah2))
    {
        cout << "El segundo instantes es anterior al primero" <<endl;
    }else if((sumam1==sumam2)&&(sumah1==sumah2))
    {
        cout << "Ambos instantes son identicos" <<endl;
    }else
    {
        cout << "Los valores introducidos no son instantes" <<endl;
    }

    /*if (sumam1 < sumam2) /-> Manera obtenida de ejercicio anterios pedido para este
    {
        cout << "El primer instante es anterior al segundo" <<endl;
    }else if (sumam1 > sumam2)
    {
        cout << "El segundo instantes es anterior al primero" <<endl;
    }else if(sumam1 == sumam2)
    {
        cout << "Ambos instantes son identicos" <<endl;
    }else
    {
        cout << "Los valores introducidos no son instantes" <<endl;
    }*/
    
    /*double restaf = sumam2-sumam1; /-> Otra manera pedida de la sesion 1

    cout << "El tiempo que hay de diferencias en segundos es: " << restaf <<endl;*/
}