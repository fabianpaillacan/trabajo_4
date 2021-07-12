#include <iostream>
#include "Tens.h"
#include "Persona.h"

using namespace std;

Tens::Tens(string nombre, string apellidoPaterno, string apellidoMaterno, string email, string genero){

    this -> run = new RUN();
    this -> nombre = nombre;
    this -> apellidoPaterno = apellidoPaterno;
    this -> apellidoMaterno = apellidoMaterno;
    this -> email= email;
    this-> genero=genero;

}
Tens::~Tens(){

}

string Tens::getEmail(){
     return this->email;
  }
 void Tens::setEmail(string email){
    this->email=email;
}
string Tens::ver() {
    return 
        "\nRun: " + this -> Tens::getrun() +
        "\nNombre: " + this -> getnombre() +
        "\nApellido Paterno: " + this -> getapellidoPaterno() +
        +"\nApellido Materno: " + this -> getapellidoMaterno() +
        "\nGenero: " + this -> getgenero()+"\nemail: "+ this->getEmail();
}