#include "Persona.h"

#include <iostream>

using namespace std;

/*Persona::Persona(string nombre, string apellidoPaterno, string apellidoMaterno, string genero) {

    //this -> fecha_nacimiento = new Fecha();
    this -> run = new RUN();
    this -> nombre = nombre;
    this -> apellidoPaterno = apellidoPaterno;
    this -> apellidoMaterno = apellidoMaterno;
    this -> genero = genero;

}*/

Persona::~Persona() {

}

/*string Persona::getFecha_nacimiento() {
    return this -> fecha_nacimiento -> ver();
}*/

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

/*string Persona::ver() {
    return "\nFecha_nacimiento: " + this -> getFecha_nacimiento() +
        "\nEdad: " + to_string(this -> Persona::edad()) +
        "\nRun: " + this -> Persona::getrun() +
        "\nNombre: " + this -> getnombre() +
        "\nApellido Paterno: " + this -> getapellidoPaterno() +
        +"\nApellido Materno: " + this -> getapellidoMaterno() +
        "\nGenero: " + this -> getgenero();
}*/

/*int Persona::edad() {

    int aniosCumplidos = 0;
    int diaPaciente = this -> fecha_nacimiento -> getdia();
    int mesPaciente = this -> fecha_nacimiento -> getmes();
    int anioPaciente = this -> fecha_nacimiento -> getanio();

    int mesActual, anioActual, diaActual, respFech, respMes;

    diaActual = this -> fecha_nacimiento -> getdiaActual();
    mesActual = this -> fecha_nacimiento -> getmesActual();
    anioActual = this -> fecha_nacimiento -> getanioActual();

    if (diaActual < diaPaciente) {
        diaActual = diaActual + 30;
        mesActual = mesActual - 1;
        respFech = diaActual - diaPaciente;
    } else
        respFech = diaActual - diaPaciente;

    if (mesActual < mesPaciente) {
        mesActual = mesActual + 12;
        anioActual = anioActual - 1;
        respMes = mesActual - mesPaciente;
    } else
        respMes = mesActual - mesPaciente;

    aniosCumplidos = anioActual - anioPaciente;

    return aniosCumplidos;
}*/
RUN * Persona::getRunObj() {

    return this -> run;
}
/*Fecha * Persona::getfechaObj() {

    return this -> fecha_nacimiento;
}*/
int Persona::setRun(string rut) {
    int success = this -> run -> setRUN(rut);
    return success;
}
/*int Persona::setfecha_nacimiento(string fecha_nacimiento) {
    return this -> fecha_nacimiento -> setFecha(fecha_nacimiento);
}*/