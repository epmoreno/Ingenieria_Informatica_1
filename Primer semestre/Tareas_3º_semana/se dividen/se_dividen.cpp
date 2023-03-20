#include <iostream>
#include <cmath>

using namespace std;

int main(){
   int numero1;
   int numero2;

   cout <<"Introduce un numero1"<<endl;
   cin >>numero1;

   cout <<"Introduce un numero2"<<endl;
   cin >>numero2;
   
   if (numero1 % numero2 == 0){
        cout << "Es divisible" << endl;
   }else{
    cout << "No es divisible" <<endl;
   }
    
}