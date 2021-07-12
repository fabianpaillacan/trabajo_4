#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
#include "RUN.h"
#include "Fecha.h"
#include "Paciente.h"
#include "Persona.h"
#include "Tens.h"
#include "nodoPaciente.h"
#include "nodoTens.h"

#define delimitador ","

using namespace std;

int agregarDatos(string nombreFile, nodoPaciente** listaPacientes);


int agregarDatos(string nombreFile, nodoPaciente ** listaPacientes) {

    Paciente * paciente;

    string apellidoPaterno;
    string fecha_nacimiento;
    string nombre;
    string genero;
    string apellidoMaterno;

    ifstream archivo;
    string rut;
    string linea_paciente;

    archivo.open(nombreFile, ios:: in );
    if (archivo.fail()) {
        cout << "falla al iniciar la lectura";
        exit(1);
    }
    int contLineas = 0;
    getline(archivo, rut);
    while (archivo.good()) {

        Paciente * paciente;

        getline(archivo, rut, ',');
        getline(archivo, apellidoPaterno, ',');
        getline(archivo, apellidoMaterno, ',');
        getline(archivo, nombre, ',');
        getline(archivo, genero, ',');
        getline(archivo, fecha_nacimiento, '\n');
        contLineas++;
        paciente = new Paciente(nombre, apellidoMaterno, apellidoPaterno, genero);

        int successRun, successFecha;
        successRun = paciente -> setRun(rut);
        successFecha = paciente -> setfecha_nacimiento(fecha_nacimiento);
        //cout<<paciente->ver();
        if (successRun != 0 && successFecha != 0) {
            agregarNodo(listaPacientes, paciente);
        }

    }
    return contLineas;

}
void agregarTens(nodoTens** listaTens){
 string nombre, apellidoPaterno, apellidoMaterno, run, email,genero;
 int n=0;

 cout<<"ingrese genero de tens: "<<endl;
 cin>>genero;
 cout<<"ingrese nombre de Tens: "<<endl;
 cin>>nombre;
 cout<<"ingrese apellido paterno de Tens: "<<endl;
 cin>>apellidoPaterno;
 cout<<"ingrese apellido materno de Tens: "<<endl;
 cin>>apellidoMaterno;
 cout<<"ingrese run de Tens: "<<endl;
 cin>>run;
 cout<<"ingrese email Tens: "<<endl;
 cin>>email;

  Tens* TENS=  new Tens(nombre,apellidoPaterno,apellidoMaterno, email, genero);
   
   TENS->setRun(run);

   agregarNodo(listaTens,TENS);
   

}
void crearListaTEST(nodoTens** listaTens){

Tens* TENS=  new Tens("fabian","paillacan","huaitro", "fabianpailalcan", "jkasd");
TENS->setRun("20922297-3");
Tens* TENS2=  new Tens("fabian2","paillacan","huaitro", "fabianpailalcan", "jkasd");
TENS2->setRun("10184049-2");
Tens* TENS3=  new Tens("fabian3","paillacan","huaitro", "fabianpailalcan", "jkasd");
TENS3->setRun("19270676-9");
   agregarNodo(listaTens,TENS);
   agregarNodo(listaTens,TENS2);
   agregarNodo(listaTens,TENS3);


}
int main (){

    int contLinea=0;
    nodoPaciente* listaPacientes=NULL;
    nodoTens* listaTens=NULL;
    contLinea=agregarDatos("Pacientes.csv", &listaPacientes);

    //agregarTens(&listaTens);

    //cout<<contLinea<<endl;

    //printList(listaTens);

   // popNodo(&listaTens);
     crearListaTEST(&listaTens);
     cout<<"termine crear lista"<<endl;
    printList(listaTens);
    cout<<"lista popNodo 1"<<endl;
    popNodo(&listaTens);
    printList(listaTens);

    cout<<"listapopNODO 2"<<endl;
    popNodo(&listaTens);
    printList(listaTens);
    cout<<"listapopNODO 3"<<endl;
    popNodo(&listaTens);
    printList(listaTens);



    //cout<<contarNodos(listaTens)<<endl;
  /*Paciente* paciente= new Paciente("fabian","paillacan","huaitro","h");
  
  tens* TENS= new tens("erwin","paillacan","huaitro","20922297-3","erwinpaillacan@gmail.com");

  TENS->setRun("20922297-3");
  
  cout<<TENS->getrun()<<endl;
  cout<<TENS->getnombre()<<endl;
  cout<<paciente->getnombre()<<endl;*/

}