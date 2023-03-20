#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double X_1;
    double X_2;
  ///////////////
    double Y_1;
    double Y_2;

    cout <<"Introcuce X_1"<<endl;
    cin >> X_1;
    cout <<"Introcuce Y_1"<<endl;
    cin >> Y_1;

    cout <<"Introcuce X_2"<<endl;
    cin >> X_2;
    cout <<"Introcuce Y_2"<<endl;
    cin >> Y_2;

    double distanciaE;
    distanciaE = sqrt(((X_1-X_2)*(X_1-X_2))+((Y_1-Y_2)*(Y_1-Y_2)));

    cout <<"El resultado seria: "<<distanciaE<<endl;
}