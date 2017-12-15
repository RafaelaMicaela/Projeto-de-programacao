#include <string>
using namespace std;

struct End{
  string bairro, rua, cidade;
  int numero;
};

struct Paciente{
  string nome;
  string sexo;
  string doenca;
  End endereco;
  long int cpf;
  int telefone;
  int idade;
};