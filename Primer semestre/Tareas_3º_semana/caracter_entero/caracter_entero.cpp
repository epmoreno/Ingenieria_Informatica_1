#include <iostream>
#include <cmath>

using namespace std;

int main(){
   char numeroCh;
   int entero;

   cout <<"Introduce un numero"<<endl;
   cin >>numeroCh;

   entero = numeroCh - '0';//O en lugar del '0' lo restamos por 48.

   cout <<"Su variable char a pasado a ser entero (int) : "<<entero<<endl;

    
}