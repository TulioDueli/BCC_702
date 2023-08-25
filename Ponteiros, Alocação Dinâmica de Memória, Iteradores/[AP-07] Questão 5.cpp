#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct aluno{
  std::string nome;
  float nota;
};

void imprimirAluno (aluno *alunos){
  cout << alunos->nome << " (" << alunos->nota << "): ";
    if (alunos->nota >= 6){
      cout << "Aprovado (a)";
    } else if (alunos->nota < 6 && alunos->nota >= 3){
      cout << "Exame Especial";
    }else{
      cout << "Reprovado (a)";
    }
  cout << endl;
}

int main() {
  int qtd = 0;
  cout << "Quantidade de alunos: ";
  cin >> qtd;
  
  aluno *alunos = new aluno[qtd];
  for (int i = 0; i < qtd; i++){
    cout << "Aluno " << i + 1 << ": \n";
    cout << "\tNome: ";
    cin >> alunos[i].nome;
    cout << "\tNota: ";
    cin >> alunos[i].nota;
  } 
  cout << "resultado:\n";
  for (int i = 0; i < qtd; i++)
      imprimirAluno(&alunos[i]);
    
  delete[] alunos;
}