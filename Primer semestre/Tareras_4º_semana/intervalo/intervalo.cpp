#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a;
    double b;
    double dIntervalo;
    char coma;
    char intervaloI, intervaloF;

    cout << "Introduzca el tipo del primer intervalo, valor de la primera cota, segunda cota y tipo de intervalo final ej.'(2.1 , 3.5]'" << endl;
    cin >> intervaloI >> a >> coma >> b >> intervaloF;


    cout << "Su intervalo es: " << endl;
    cout << intervaloI << a << " " << coma << " " << b << intervaloF << endl;

    cout << "Escriba ahora un numero para comprobar si esta dentro del intervalo establecido: " << endl;
    cin >> dIntervalo;

    // (x,x)
    if ((intervaloI == '(') && (intervaloF ==')'))
    {
        if (dIntervalo > a && dIntervalo < b){
            cout << "El valor : " << dIntervalo << ", Esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }else{
            cout << "El valor : " << dIntervalo << ", No esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }
    }

    // (x,x]
    else if ((intervaloI == '(') && (intervaloF ==']'))
    {
        if (dIntervalo > b || dIntervalo <= a){
            cout << "El valor : " << dIntervalo << ", No esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }else{
            cout << "El valor : " << dIntervalo << ", Esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }
    }

    // [x,x)
    else if ((intervaloI == '[') && (intervaloF ==')'))
    {
        if (dIntervalo >= b || dIntervalo < a){
            cout << "El valor : " << dIntervalo << ", No esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }else{
            cout << "El valor : " << dIntervalo << ", Esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }
    }

    // [x,x]
    else if ((intervaloI == '[') && (intervaloF ==']'))
    {
        if (dIntervalo >= b || dIntervalo <= a){
            cout << "El valor : " << dIntervalo << ", No esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }else{
            cout << "El valor : " << dIntervalo << ", Esta dentro del intervalo: " << intervaloI << a << " " << coma << " " << b << intervaloF << endl;
        }
    }

    //MAL
    else{
        cout << "Something went so wrong" << endl;
    }
    
}