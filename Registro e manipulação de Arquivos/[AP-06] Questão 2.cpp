#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

struct Aluno {
  std::string nome;
  float media = 0;
  int faltas = 0;
};

int main() {
  int qtd = 0;

  cout << "Digite a quantidade de alunos: ";
  cin >> qtd;
  
  Aluno alunos[qtd];
  
  for (int i = 0; i < qtd; i++){
    cout << "Aluno " << i + 1 << ":\n";
    cout << "\tNome: ";
    cin >> alunos[i].nome;
    cout << "\tMédia: ";
    cin >> alunos[i].media;
    cout << "\tFaltas: ";
    cin >> alunos[i].faltas;
  }
  
  for (int i = 0; i < qtd; i++) {
    if (alunos[i].media < 6 || alunos[i].faltas > 18) {
      cout << alunos[i].nome << " REPROVADO (A)" << endl;
    } else {
      cout << alunos[i].nome << " APROVADO (A)" << endl;
    }
  }
}