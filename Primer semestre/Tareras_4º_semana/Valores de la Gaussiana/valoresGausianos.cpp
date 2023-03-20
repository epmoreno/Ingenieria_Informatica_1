#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double PI = 3.14159265;
    double esperanza;//u
    double desviacion;//o
    double vAbs;

    cout << "Debes introducir en el siguiente orden los datos:" <<endl;
    cout << "Esperanza: "; cin >> esperanza;
    cout << "Desviacion: "; cin >> desviacion;
    cout << "Valor de abscisas: "; cin >> vAbs;

    double d1problema = (1)/(desviacion*(sqrt(2*PI)));
    double numeroE = exp((-0.5)*(pow(((vAbs-esperanza)/desviacion),2))); //-> Con funcion pow()
    double numeroE = exp((-0.5)*(((vAbs-esperanza)/desviacion)*((vAbs-esperanza)/desviacion))); //-> Sin funcion pow()

    double formula_Gaussiana = d1problema*numeroE;

    cout << "("<<esperanza<<","<<desviacion<<","<<vAbs<<") = "<<formula_Gaussiana<<endl;
}