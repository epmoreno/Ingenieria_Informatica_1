#include <iostream>

using namespace std;

const int MAX_PRERREQ = 5;

class Asignatura {
    private:
        string nombre;
        string acronimo;
        int curso;
        int num_prerreq;
        Asignatura* prerreq[MAX_PRERREQ];

    public:
       Asignatura(){
            nombre = "";
            acronimo = "";
            curso = 0;
        }
        Asignatura(string nombre, string acronimo, int curso){
            this->nombre = nombre;
            this->acronimo = acronimo;
            this->curso = curso;
        }

        void set_nombre(string n_nombre){
            nombre = n_nombre;
        }
        void set_acronimo(string n_acronimo){
            acronimo = n_acronimo;
        }
        void set_curso(int n_curso){
            curso = n_curso;
        }

        string get_name(){
            return nombre;
        }
        string get_acronimo(){
            return acronimo;
        }
        int get_curso(){
            return curso;
        }

        void imprimir(){
            cout <<endl;
            cout <<"///////////////////////////////////////////////////"<<endl;
            cout << " Nombre: " << get_name() << endl;
            cout << " Acronimo: " << get_acronimo() <<endl;
            cout << " Curso: " << get_curso() <<endl;
            cout <<"///////////////////////////////////////////////////"<<endl;
            cout <<endl;
        }
};




int main(){

    //Asignatura primera("Fundamentos de la Programacion","FP",1);//Opcion1
    
    Asignatura primera;//Opcion2
    primera.set_nombre("Fundamentos de la Programacion");
    primera.set_acronimo("FP");
    primera.set_curso(1);

    primera.imprimir();
}


