#include <iostream>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string _nombre, int _edad);
        void mostrar();
};

class Alumno:public Persona
{
private:
    /* data */
    string grupo;
    float calif;
public:
    Alumno(string _nombre, int _edad,string _grupo, float _calif);
    ~Alumno();
    void mostrar();
};

Persona::Persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

Alumno::Alumno(string _nombre, int _edad,string _grupo, float _calif):Persona(_nombre, _edad)
{
    grupo = _grupo;
    calif = _calif;
}

Alumno::~Alumno()
{
}

void Persona::mostrar(){
    cout << nombre << endl;
    cout << edad << endl;
}

void Alumno::mostrar(){
    cout << grupo << endl;
    cout << calif << endl;
}


int main(){

    Persona persona1("Ivan",29);
    persona1.mostrar();

    Alumno alumno1("Yaz", 28, "5to A", 75.6);
    alumno1.mostrar();

}