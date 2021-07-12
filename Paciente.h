#include <iostream>
#include "Persona.h"
#include "Fecha.h"

#ifndef PACIENTE_H
#define PACIENTE_H

using namespace std;

class Paciente: public Persona{

  public: 
    Fecha* fecha_nacimiento;
    Paciente(string nombre, string apellidoPaterno, string apellidoMaterno, string genero);
    ~Paciente();
    
     //this -> fecha_nacimiento = new Fecha();
    int edad();
    Fecha* getfechaObj();
    int setfecha_nacimiento(string fecha_nacimiento);
    string getFecha_nacimiento();
    
    /*string getnombre_apellido();
    string getrun();
    RUN* getRunObj();
    string getnombre();
    string getapellidoPaterno();
    string getapellidoMaterno();
    string getgenero();
    int setRun(string rut);*/
    //string ver();




};
#endif