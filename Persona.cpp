#include "Persona.h"

#include <iostream>

using namespace std;

Persona::~Persona() {

}

string Persona::getrun() {
    return this -> run -> RUN::getRUN();
}
string Persona::getnombre() {
    return this -> nombre;
}
string Persona::getapellidoPaterno() {
    return this -> apellidoPaterno;
}
string Persona::getapellidoMaterno() {
    return this -> apellidoMaterno;
}
string Persona::getgenero() {
    return this -> genero;
}

RUN * Persona::getRunObj() {

    return this -> run;
}

int Persona::setRun(string rut) {
    int success = this -> run -> setRUN(rut);
    return success;
}
