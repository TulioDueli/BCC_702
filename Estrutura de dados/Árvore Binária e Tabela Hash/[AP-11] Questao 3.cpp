#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
  cout << "Informe os nomes a serem armazenados na tabela hash. \nDigite sair para parar de adicionar nomes.\n";

  unordered_set<string> nomes;
  string nome, find_nome;

  do {
    cout << "Digite um nome: ";
    cin >> nome;
    nomes.insert(nome);
  } while(nome != "sair");
  
  cout << "Digite o nome que deseja procurar na tabela: ";
  cin >> find_nome;
  
  if (nomes.find(find_nome) == nomes.end()){
    cout << find_nome << " não está na tabela hash." << endl;
  } else{
    cout << find_nome << " está na tabela hash." << endl;
  }
}