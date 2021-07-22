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
    
    int edad();
    Fecha* getfechaObj();
    int setfecha_nacimiento(string fecha_nacimiento);
    string getFecha_nacimiento();
    string ver();
    
};
#endif