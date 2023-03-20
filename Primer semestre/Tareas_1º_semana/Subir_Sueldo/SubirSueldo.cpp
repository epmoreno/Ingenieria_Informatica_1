#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double salario_base;
    double salario_final;

    cout << "Introduce tu salario base: \n";
    cin >>salario_base;
    salario_final= 1.02*salario_base;

    cout << "Tu salario Final es: ";
    cout << salario_final;
}