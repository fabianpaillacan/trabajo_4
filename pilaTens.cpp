#include "pilaTens.h"
#include "Tens.h"
#include <iostream>
#include <string.h>

typedef char cadena[200];
//int cont=0;
void agregarNodo(pilaTens** head_ref, Tens* tens){ 
//el nuevo nodo queda al final.
   
    pilaTens* new_node = new pilaTens();
 
    pilaTens *last = *head_ref;
    new_node->tens = tens;
    new_node->siguiente = NULL;
    //cont++;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
  
    while (last->siguiente != NULL)
      
      last = last->siguiente;
      last->siguiente = new_node;
  
    return;
}
void popNodo(pilaTens** head_ref){
  //saca el ultimo nodo de la lista, que es el mas reciente 
  //con esta funcion sale primero el ultimo en ingresar pero no se muestra por pantalla. hay un error en el ultimo nodo, osea en el primero en ingresar .
  pilaTens* ptr;
  ptr=*head_ref;
  pilaTens* primero= *head_ref;
  

  if (ptr->siguiente==NULL){
    //cout<<ptr->tens->ver();
    //delete (ptr); //aqui hay un problema de segmetatio fault. 
    
    ptr=NULL;
    return;
  }
  while (ptr->siguiente->siguiente != NULL){
    
    ptr=ptr->siguiente;
  }

  //cout<<ptr->siguiente->tens->ver();
 
  ptr->siguiente=NULL;
}

void printList(pilaTens *node){
{
  if (node==NULL){
    
    return;
  }
    while (node != NULL)
    {
        cout<<" "<<node->tens->ver()<<endl;
        cout<<"--------------------\n";
        node = node->siguiente;
    }
}
    
}

int contarNodos(pilaTens *node){
  int cont=0;
    while (node!=NULL){
        cont++;
        node=node->siguiente;
    }
    return cont;
}
