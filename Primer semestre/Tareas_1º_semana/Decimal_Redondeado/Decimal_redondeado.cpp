#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double decimal1 = 3.59;
    double decimal2 = 3.59;
    double decimal3 = 3.596;
    //double redondeo;
    //redondeo = pow(round(numero),7);
    
    cout <<"Numero a redondear a la primera decimal: " << decimal1 <<endl;
    printf("%.1f; \n",decimal1);

    cout <<"Numero a redondear a la segunda decimal: " << decimal2 <<endl;
    printf("%.2f; \n",decimal2);

    cout <<"Numero a redondear a la segunda decimal: " << decimal3 <<endl;
    printf("%.2f; \n",decimal3);
}