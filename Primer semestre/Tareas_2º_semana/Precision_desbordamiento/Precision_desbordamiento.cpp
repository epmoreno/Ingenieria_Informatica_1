#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int chico, chico1, chico2; //a
    chico1 = 1234567;
    chico2 = 1234567;
    chico = chico1 * chico2;
    cout.precision(1);
    cout<<chico;
    //NO HAY NINGUN ERROR CON EL COMANDO .precision() debido a que es un numero entero
    //Y no llega a la capacidad maxima para que se produzca un desborde del copilador
    
    
    long grande; //b
    int chico1, chico2;
    chico1 = 1234567;
    chico2 = 1234567;
    grande = chico1 * chico2;
    cout<<"B = "<<grande<<endl;
    //NO HAY NINGUN ERROR CON EL COMANDO .precision() debido a que es un numero entero
    //Y no llega a la capacidad maxima para que se produzca un desborde del copilador
    
    
    double resultado, real1, real2; //c
    real1 = 123.1;
    real2 = 124.2;
    resultado = real1 * real2;
    cout.precision(1);
    cout<<"C = "<<resultado<<endl;
    //No se produce ningun tipo de fallo ni de precision ni de desordamiento
    //precision(8) = 15289.02 ; precision(6) = 15289 ; precision(4) = 1.529e+04 ; precision(2) = 1.5e+04 ; precision(1) =  2e+04
    
    
    double resultado, real1, real2; //d
    real1 = 123456789.1;
    real2 = 123456789.2;
    resultado = real1 * real2;
    cout.precision(17);
    cout<<"D = "<<resultado<<endl;
    // Apartir de precision(16) vamos a tener un problema de precision tal que
    // no nos mostrara como deberia todos las formas correctas del numero acortado.
    
    
    double real, otro_real; //e
    real = 2e34;
    otro_real = real + 1;
    otro_real = otro_real - real;
    cout.precision(0);
    cout<<"E = "<<otro_real<<endl;
    //No se produce ningun tipo de fallo en esta sentencia
    //ya que la suma de un 1 a un numero tan grande no afectara nada y al restarlos sera igual a 0
    //Por lo que no hay ningun fallo de precison ni de desbordamiento
    
    
    double real, otro_real; //f
    real = 1e+300;
    otro_real = 1e+200;
    otro_real = otro_real * real;
    cout.precision(1e+301);
    cout<<"F = "<<otro_real<<endl;
    //A hora de compilar los datos nos da un error de desbordamiento debido
    //al tamaño en espacio que ocupa la variable.
    
    
    float chico; //g
    double grande;
    grande = 2e+150;
    chico = grande;
    cout.precision(2e150);
    cout<<"G = "<<chico<<endl;
    //Se da el mismo error que en el caso anterior el tamaño del numero es mucho mayor
    //por lo que el compilador te exige que cambies ese valor al numero maximo capaz de almacenar
    //9223372036854775807
    


}