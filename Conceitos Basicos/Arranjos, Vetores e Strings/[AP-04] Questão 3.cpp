#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main(){
  float media = 0;
  int matri = 0, ida = 0, alunos = 0;
  std::vector<int> matricula;
  std::vector<int> idade;
  cout << "Digite o número de alunos da turma: ";
  cin >> alunos;
  for (int i = 1; i < alunos + 1; i++){
    cout << "Aluno " << i << ":\n";
    cout << "   Matrícula: ";
    cin >> matri;
    cout << "   Idade: ";
    cin >> ida;
    matricula.push_back(matri);
    idade.push_back(ida);
  }
  for (int i = 0; i < alunos; i++){
    media += idade[i];
  }
  media /= alunos;
  cout << fixed << std::setprecision(2) << "\nAlunos com idade pelo menos 5 anos maior que a média (" << media << "):";
  for (int i = 0; i < alunos; i++){
    if (idade[i] > media + 5){
      cout << "\nMatrícula: " << matricula[i];
    }
  }
  cout << endl;
}