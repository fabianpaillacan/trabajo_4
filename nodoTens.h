#include <iostream>
#include "Tens.h"

using namespace std;

class nodoTens{
  public:
    Tens* tens; 
    nodoTens* siguiente;
};
void agregarNodo(nodoTens** head_ref, Tens* tens);
void popNodo(nodoTens** head_ref);
void printList(nodoTens *node);
int  contarNodos(nodoTens *node);