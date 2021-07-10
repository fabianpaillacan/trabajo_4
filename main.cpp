#include <iostream>
#include "RUN.h"
#include "Fecha.h"
#include "Persona.h"

using namespace std;

int main (){

  Fecha* fecha=new Fecha();
  Persona* persona= new Persona("fabian","paillacan","huaitro","h");
  
  /*RUN* run=new RUN();
  run->setRUN("20922297-3");*/
  persona->setRun("20922297-4");

  persona->setfecha_nacimiento("27-noviembre-2001");


  

  cout<<persona->ver();
 
}