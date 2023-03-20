#include <iostream> 
#include <cctype>

using namespace std;  

int main(){    
   double bodyTemperature;
   bool difficultyBreathing, diabetes, cancer;
   char opcion;
   
   cout << "Detección Aproximada de COVID-19\n\n\n"
        << "Introduzca la temperatura y a continuación conteste S/N a las siguientes preguntas:\n\n"
        << "- ¿Tiene deficultades para respirar?\n"
        << "- ¿Es diabético?\n"
        << "- ¿Tiene algún tipo de cáncer?\n\n";
        
   cin >> bodyTemperature;
   cin >> opcion;
   difficultyBreathing = toupper(opcion) == 'S';
   cin >> opcion;
   diabetes = toupper(opcion) == 'S';
   cin >> opcion;
   cancer = toupper(opcion) == 'S';
   
   /* 
   El siguiente código es el que aparecía en la página web.
   Arréglelo
   */
   
   if((bodyTemperature >= 38 && difficultyBreathing) ||
      (bodyTemperature >= 38 && difficultyBreathing && diabetes) ||
      (bodyTemperature >= 38 && difficultyBreathing && cancer) ||
      (bodyTemperature >= 38 && diabetes) ||
      (bodyTemperature >= 38 && cancer))
      cout << "Consulte autoridades locales";
   else 
      if (bodyTemperature >= 38)
         cout << "Cuarentena en su casa";
      else 
         if (bodyTemperature < 38)
            cout << "Test negativo";
         else
            cout << "Test negativo";   
}