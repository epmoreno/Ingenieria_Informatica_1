#include <iostream>
#include <string>

using namespace std;

struct Course {
    string name;
    Course **requisites;
    int num_requisites;
};

int main(){
   Course Calculo = {"Calculo",nullptr,0};
   Course Estructuras_datos = {"ED",nullptr,0};

   Course *r_MP[] = {&Estructuras_datos};
   Course Metodologia_programacion = {"MP",r_MP,1};

   Course *r_FP[] = {&Metodologia_programacion,&Estructuras_datos};
   Course Fundamento_programacion = {"FP",r_FP,2};

   cout << Fundamento_programacion.name << " tiene " << Fundamento_programacion.num_requisites << " requisitos:" <<endl;
   for (int i = 0; i < Fundamento_programacion.num_requisites; i++)
   {
        cout << "- " << Fundamento_programacion.requisites[i]->name << endl;
   }
   cout << Calculo.name << " tiene " << Calculo.num_requisites << " requisitos:" <<endl;

   return 0;
}
