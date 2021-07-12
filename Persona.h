#include <iostream> 
#include "Fecha.h"
#include "RUN.h"
#ifndef PERSONA_H
#define PERSONA_H


using namespace std;

class Persona {
  protected: 
  //Fecha *fecha_nacimiento;
  RUN *run;
  string nombre;
  string apellidoPaterno;
  string apellidoMaterno;
  string genero;

  public:
  /*Persona(string nombre,string apellidoPaterno, string apellidoMaterno, string genero);*/
  
  ~Persona();
  string getnombre_apellido();
  string getrun();
  RUN* getRunObj();
  string getnombre();
  string getapellidoPaterno();
  string getapellidoMaterno();
  string getgenero();
  void setNombre();
  void setApellidopaterno();
  void setApellidoMaterno();
  void setRun();
  int setRun(string rut);
  string ver();
 
 //int edad();//calcula la edad del paciente
  //string getFecha_nacimiento();
  //int setfecha_nacimiento(string fecha_nacimiento);
  //Fecha* getfechaObj();
};
#endif