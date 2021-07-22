#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
#include "RUN.h"
#include "Fecha.h"
#include "Paciente.h"
#include "Persona.h"
#include "Tens.h"
#include "colaPaciente.h"
#include "pilaTens.h"

#define delimitador ","

using namespace std;
int cont=0, x=0;
int agregarDatos(string nombreFile, colaPaciente** listaPacientes);


int agregarDatos(string nombreFile, colaPaciente ** listaPacientes) {

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
       
        if (successRun != 0 && successFecha != 0) {
            InsertarCola(listaPacientes, paciente);
         
        }

    }
    return contLineas;

}
void agregarTens(pilaTens** listaTens){
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
void crearListaTEST(pilaTens** listaTens){

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
/*template <class t>

t conNodo(t* node){
  int cont=0;
    while (node!=NULL){
        cont++;
        node=node->siguiente;
    }
    return cont;
}*/
int main (){

    int contLinea=0;
    colaPaciente* listaPacientes=NULL;
    pilaTens* listaTens=NULL;

   // Paciente* paciente=NULL;

   
   int opc = 0;
   int  a;

    while (opc < 5)

    {
        cout << "................................................................";
        cout << "\n";
        cout << "|1| Ingresar Tens.\n";
        cout << "|2| Mostrar Tens.\n";
        cout << "|3| Cargar Pacientes.\n";
        cout << "|4| Programar cita de Pacientes.\n";
        cout << "|5| salir.\n";
        cout << "................................................................\n";
        cin >> opc;
        switch (opc) {
        case 1: {
                crearListaTEST(&listaTens);  //este es solo de prueba, esta funcion los tens ya se agregaron. pero no es asi. 
                getchar();
                getchar();
                system("clear");
            break;
        }
        case 2: {
                printList(listaTens);
               
                 cout<<"\nse han cargado: "<<contarNodos(listaTens)<<" de Tens"<<endl;
            break;
        }
        case 3: {
             agregarDatos("Pacientes.csv", &listaPacientes);
             //se van a agregar de forma ordenada. la cabecera apuntara a la persona con mayor edad. la cola quedara de forma descendente.  
             printList(listaPacientes);
             cout<<"\nse han cargado: "<<contarNodos(listaPacientes)<<" de pacientes"<<endl;

            break;
        }
        case 4: {
            pop(listaPacientes);
           
            break;
        }
        }
    }
   
   /*contLinea=agregarDatos("Pacientes.csv", &listaPacientes);
   printList(listaPacientes);
  
  

    crearListaTEST(&listaTens);
     //cout<<"termine crear lista"<<endl;
    printList(listaTens);
    x=3;
    cout<<"lista popNodo 1"<<endl;
    popNodo(&listaTens);
   printList(listaTens);

    cout<<"listapopNODO 2"<<endl;
    popNodo(&listaTens);
    printList(listaTens);
    cout<<"listapopNODO 3"<<endl;
    popNodo(&listaTens);
    printList(listaTens);*/

}