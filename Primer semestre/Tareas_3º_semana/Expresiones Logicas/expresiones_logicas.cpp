#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char letra;
    int edad;
    int adivine;
    int año;
    int velocidad;
    char vocal;

    cout << "Escribe una letra en a/A:";
    cin >> letra;
    if(letra >= 97 && letra <= 122){
        letra = '1';
        cout << "resultado letra: " << letra << endl;
    }else{
        letra = '0';
        cout << "resultado letra: " << letra << endl;
    }

    cout << "Escribe una edad :";
    cin >> edad;
    if(edad >= 18 && edad <= 65){
        edad = 1;
        cout << "resultado edad: " << edad << endl;
    }else{
        edad = 0;
        cout << "resultado edad: " << edad << endl;
    }

    cout << "Escribe una adivine :";
    cin >> adivine;
    if(adivine >= 1 && adivine <= 100){
        adivine = 1;
        cout << "resultado adivine: " << adivine << endl;
    }else{
        adivine = 0;
        cout << "resultado adivine: " << adivine << endl;
    }
    
    cout << "Escribe un año :";
    cin >> año;
    if(((año % año/4 == 0) && (año % año/100 != 0))||(año / 400)){
        año = 1;
        cout << "resultado año: " << año << endl;
    }else{
        año = 0;
        cout << "resultado año: " << año << endl;
    }

    cout << "Escribe una valocidad :";
    cin >> velocidad;
    if(velocidad >= 1 && velocidad <= 100){
        velocidad = 1;
        cout << "resultado velocidad: " << velocidad << endl;
    }else{
        velocidad = 0;
        cout << "resultado velocidad: " << velocidad << endl;
    }

    cout << "Escribe una vocal :";
    cin >> vocal;
    if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u'){
        vocal = '1';
        cout << "resultado vocal: " << vocal << endl;
    }else{
        vocal = '0';
        cout << "resultado vocal: " << vocal << endl;
    }
}