#include "nodoTens.h"
#include "Tens.h"
#include <iostream>
#include <string.h>

typedef char cadena[200];

void agregarNodo(nodoTens** head_ref, Tens* tens){ 
//el nuevo nodo queda al final.
   
    nodoTens* new_node = new nodoTens();
 
    nodoTens *last = *head_ref;
    new_node->tens = tens;
    new_node->siguiente = NULL;
 
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
void popNodo(nodoTens** head_ref){
  //saca el ultimo nodo de la lista, que es el mas reciente 
  nodoTens* ptr;
  ptr=*head_ref;

  if (ptr->siguiente==NULL){
    //cout<<ptr->tens->ver();
    ptr=NULL;
    return;
  }
  while (ptr->siguiente->siguiente != NULL){
    ptr=ptr->siguiente;
  }

  //cout<<ptr->siguiente->tens->ver();

  ptr->siguiente=NULL;
}

void printList(nodoTens *node){
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

int contarNodos(nodoTens *node){
  int cont=0;
    while (node!=NULL){
        cont++;
        node=node->siguiente;
    }
    return cont;
}
