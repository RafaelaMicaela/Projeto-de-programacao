#include <string>
#include "paciente.h"
using namespace std;

struct Medico{
  string nome;
  Paciente p[10];
  int k;
  int i;
};
bool Inserir(Medico &m, Paciente p);