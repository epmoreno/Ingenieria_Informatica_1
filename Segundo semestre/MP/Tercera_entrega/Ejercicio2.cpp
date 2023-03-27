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
            num_prerreq = 0;
        }
        Asignatura(string nombre, string acronimo, int curso, int num_prerreq){
            this->nombre = nombre;
            this->acronimo = acronimo;
            this->curso = curso;
            this->num_prerreq = num_prerreq;
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
        bool añadirPrerreq(Asignatura* nuevoPrerreq){
            if (num_prerreq >= MAX_PRERREQ)
            {
                return false;
            }
            for (int i = 0; i < num_prerreq; i++)
            {
                if (prerreq[i] == nuevoPrerreq)
                {
                    return false;
                }
                
            }
            
            prerreq[num_prerreq] = nuevoPrerreq;
            num_prerreq++;
            return true;
        }
};




int main(){

    Asignatura primera("Fundamentos de la Programacion","FP",1,0);//Opcion1
    Asignatura segunda("segunda","2",1,0);
    
    bool check = primera.añadirPrerreq(&segunda);
    
    primera.imprimir();

    if (check)
    {
        cout << "Se añadio correctamente" << endl;
    } else {
        cout << "Hubo algun problema" << endl;
    }
}


