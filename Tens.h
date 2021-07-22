#include "Persona.h"
#include <iostream>
#ifndef TENS_H
#define TENS_H
using namespace std;

class Tens : public Persona{

  public:
  string email;
  Tens(string nombre, string apellidoPaterno, string apellidoMaterno, string email, string genero);
  ~Tens();
  string ver();
  string getEmail();
  void setEmail(string email); 
};
#endif
