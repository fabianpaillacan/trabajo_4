#include "Paciente.h"

using namespace std;

class colaPaciente{
  public:
    Paciente* paciente;
    colaPaciente* siguiente;
  
};

void InsertarCola(colaPaciente** head_ref, Paciente* paciente);
void pop(colaPaciente* node);
void printList(colaPaciente *node);
int  contarNodos(colaPaciente *node);
