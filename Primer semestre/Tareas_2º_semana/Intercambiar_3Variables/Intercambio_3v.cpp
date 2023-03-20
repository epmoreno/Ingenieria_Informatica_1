#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    double y;
    double z;

    cout << "introduce valores a las variables(X,Y,Z): "<<endl;
    cin >> x >> y >>z;

    double subX = z;
    double subY = x;
    double subZ = y;

    cout <<"EL valor de X es: "<<x<<" EL valor de Y es: "<<y<<" EL valor de Z es: "<<z<<endl;
    
    x = subX;
    y =  subY;
    z = subZ;

   cout <<"EL valor de X es ahora de: "<<x<<" EL valor de Y es ahora de: "<<y<<" EL valor de Z es ahora de: "<<z<<endl;
}