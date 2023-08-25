#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;

//ofstream(do sistema para o arquivo), ifstream(do arquivo para o sistema), fstream(os dois);

struct Aluno {
  std::string nome;
  float nota1 = 0, nota2 = 0, media = 0;
};

int main() {
  Aluno alunos[10];
  ofstream arquivo;
  arquivo.open("alunos.txt", std::ios::app);

  for (int i = 0; i < 10; i++){
    cout << "Aluno " << i + 1 << ":\n";
    cout << "\tNome: ";
    cin >> alunos[i].nome;
    cout << "\tNota 1: ";
    cin >> alunos[i].nota1;
    cout << "\tNota 2: ";
    cin >> alunos[i].nota2;
    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
  }

  for (int i = 0; i < 10; i++){
    arquivo << alunos[i].nome << "\t" << alunos[i].nota1 << "\t" << alunos[i].nota2 << "\t" << alunos[i].media << endl;
  }
  arquivo.close();
}