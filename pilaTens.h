#include <iostream>
#include "Tens.h"

using namespace std;

class pilaTens{
  public:
    Tens* tens; 
    pilaTens* siguiente;
};
void agregarNodo(pilaTens** head_ref, Tens* tens);
void popNodo(pilaTens** head_ref);
void printList(pilaTens *node);
int  contarNodos(pilaTens *node);