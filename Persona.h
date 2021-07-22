#include <iostream> 
#include "Fecha.h"
#include "RUN.h"
#ifndef PERSONA_H
#define PERSONA_H


using namespace std;

class Persona {
  protected: 
  RUN *run;
  string nombre;
  string apellidoPaterno;
  string apellidoMaterno;
  string genero;

  public:
  
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
 
 
};
#endif