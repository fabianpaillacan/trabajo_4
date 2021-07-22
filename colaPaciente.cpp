#include "colaPaciente.h"
#include "Paciente.h"
#include <iostream>
#include <string.h>

typedef char cadena[200];

void InsertarCola(colaPaciente** head_ref, Paciente* paciente){
 colaPaciente* new_node = new colaPaciente();
 //en este codigo agregamos un nuevo elemento al final de la cola.
 //Se 
    colaPaciente *last = *head_ref;
    colaPaciente* primero=*head_ref;
    new_node->paciente = paciente;
    new_node->siguiente = NULL;
   
   if (*head_ref == NULL || new_node->paciente->edad() > primero->paciente->edad())
    {
        new_node->siguiente=primero;
        primero=new_node;
        *head_ref=primero;
        return;
    }
    else {
      colaPaciente* aux= *head_ref;
      
      while (aux->siguiente!=NULL && aux->siguiente->paciente->edad() > new_node->paciente->edad()){
        aux = aux->siguiente;
      }
      new_node->siguiente = aux->siguiente;
        aux->siguiente = new_node;
    }
   
    return;
}
void printList(colaPaciente *node){
{
    while (node != NULL)
    {
        cout<<" "<<node->paciente->ver()<<endl;
        cout<<"--------------------\n";
        node = node->siguiente;
    }
    //cout<<ultimo;
}
    
}
void pop(colaPaciente* node){
  int cont=0, numPacientes=0, contDia=1;
  cout<<"cuantos pacientes por dia desea vacunar: ";
  cin>>numPacientes;
  colaPaciente* aux=node; 
  while (node!=NULL){
      cont++;
      if (aux==node){
         cout<<"\n\n\n";
        cout<<"dia-> "<<contDia<<endl;
        cout<<"---------------------"<<endl;
       contDia++;
      }
      cout<<node->paciente->ver()<<endl;
      if (cont==numPacientes){
        cout<<"\n\n\n";
        cout<<"dia-> "<<contDia<<endl;
        cout<<"---------------------"<<endl;
        cont=0;
        contDia++;
      }
    node=node->siguiente;
  }

}

int contarNodos(colaPaciente *node){
  int cont=0;
    while (node!=NULL){
        cont++;
        node=node->siguiente;
    }
    return cont;
}

   