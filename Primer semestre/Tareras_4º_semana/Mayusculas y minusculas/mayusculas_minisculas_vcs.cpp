#include <iostream>
#include <cmath>

using namespace std;

int main(){

char letra;
cout << " Escribe una letra " <<endl;
cin >> letra;
    
if (letra >= 97 && letra <= 122){
    int letra_M = letra - 32;
    char conversion = letra_M;
    cout << " Su letra era minuscula, ahora convertida a mayusculas es: " << conversion <<endl;

}else if (letra >= 65 && letra <= 90){
    int letra_m = letra + 32;
    char conversion1 = letra_m;
    cout << " Su letra era mayusculas, ahora convertida a minusculas es: " << conversion1 <<endl;

}else{
    cout << "El caracter que has introducido no es una letra"<<endl;
}

/**->¿Cual seria el inconveniente de usar dos variables tipo "bool"?

- No vamos a tener problemas de identificar si las variables son mayusculas o minusculas
 el problema seria a la hora de la conversion de estas variables.

**/
}