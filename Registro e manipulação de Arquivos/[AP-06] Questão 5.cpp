#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

//ofstream(do sistema para o arquivo), ifstream(do arquivo para o sistema), fstream(os dois);

int main() {
   ifstream arquivo;
   arquivo.open("alunos.txt");
  
  string nome, nome_1;
  float nota1 = 0, nota2 = 0, media = 0, maior = -1000;
  float nota_1 = 0, nota_2 = 0;

  if (arquivo.is_open()){
    cout << "Dados do aluno com maior média: ";
    
    while (arquivo >> nome >> nota1 >> nota2 >> media){
      if (media > maior){
        nome_1 = nome;
        nota_1 = nota1;
        nota_2 = nota2;
        maior = media;
      }
    }
      cout << nome_1 << "\nNota 1: " << nota_1 << "\nNota 2 " << nota_2 << "\nMédia: " << maior;
    arquivo.close();
  }else{
    cout << "Não foi possível abrir o arquivo." << endl;
  }
}