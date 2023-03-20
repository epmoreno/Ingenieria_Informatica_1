#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double capital;
    double interes;

    cout <<"introduce capital\n";
    cin >>capital;
    cout <<"introduce interes\n";
    cin >>interes;

    double cuenta = (capital*interes)/100;
    double total = capital+cuenta;
    
    cout <<"Dispondra en un año de: ";
    cout <<total;
}