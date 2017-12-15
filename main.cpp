#include <iostream>
#include "medico.h"
using namespace std;

Medico m;
int op = 1;
Paciente p;

int main() {
  for(int i=0; i<2;i++){
    cout << "Digite o nome do medico "<<i+1; getline(cin, m[i].nome);
  }
  while (op) {
        cout << "1 - Inserir Paciente, 2 - Listar, 0 - Fim: ";
        cin >> op;
        if (op == 1) {
          cout<<"Cadastrar no Medico 1 ou 2: ";cin>>i;
          
            cin.ignore();
            cout<<"Cadastro do paciente\n";
            cout << "Nome: "; getline(cin, p.nome);
            cout<<"Sexo: "; cin>>p.sexo;
            cout<<"Doença: "; cin>>p.doenca;
            cout<<"Rua: "; cin.ignore(); getline(cin, p.endereco.rua);
            cout<<"Numedo da casa: "; cin>>p.endereco.numero;
            cout<<"Bairro: "; cin.ignore(); getline(cin, p.endereco.bairro);
            cout<<"Cidade: "; cin.ignore(); getline(cin, p.endereco.cidade);
            cout<<"CPF (Somente numeros): "; cin>>p.cpf;
            cout<<"Telefone: (Somente numeros): "; cin>>p.telefone;
            cout<<"Idade: "; cin>>p.idade;
            Inserir(m[i], p);
        }
  }
}
