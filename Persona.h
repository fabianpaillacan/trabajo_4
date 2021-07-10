#include <iostream> 
#include "Fecha.h"
#include "RUN.h"
#ifndef PERSONA_H
#define PERSONA_H


using namespace std;

class Persona {
  private: 
  Fecha *fecha_nacimiento;
  RUN *run;
  string nombre;
  string apellidoPaterno;
  string apellidoMaterno;
  string genero;

  public:
  Persona(string nombre,string apellidoPaterno, string apellidoMaterno, string genero);
  ~Persona();
  int edad();//calcula la edad del paciente
  string getFecha_nacimiento();
  string getnombre_apellido();
  string getrun();
  RUN* getRunObj();
  string getnombre();
  string getapellidoPaterno();
  string getapellidoMaterno();
  string getgenero();
  Fecha* getfechaObj();
  int setRun(string rut);
  int setfecha_nacimiento(string fecha_nacimiento);
  string ver();
 
};
#endif