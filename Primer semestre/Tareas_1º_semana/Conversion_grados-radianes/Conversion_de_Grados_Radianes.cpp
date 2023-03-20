#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double g1;
    double g2;
    double conversion;
    double conversion1;
    const double PI = 6*asin(0.5);

    cout <<"Introduce los grados:"<<endl;
    cin >> g1 >> g2;

    conversion = g1*(PI/180);
    conversion1 = g2*(PI/180);

    cout << "Su resultado en radianes es:  '" << conversion << "'  y  '" << conversion1 <<"'"<<endl;
}