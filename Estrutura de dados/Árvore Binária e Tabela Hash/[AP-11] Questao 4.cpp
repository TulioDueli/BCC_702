#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
  unordered_map<string, int> dados;
  int qtd = 0, idd = 0;
  string nome, find_nome;
  
  cout << "Quantas pessoas você quer inserir? ";
  cin >> qtd;

  for (int i = 0; i < qtd; i++){
    cout << "Digite o nome da pessoa " << i + 1 << " : ";
    cin >> nome;
    cout << "Digite a idade da pessoa " << i + 1 << " : ";
    cin >> idd;
    dados.insert({nome, idd});
  }
  cout << "\nDigite o nome para consultar a idade: ";
  cin >> find_nome;
  
   if (dados.count(find_nome) == 0){
     cout << "Nome não encontrado na tabela hash." << endl;
   } else {
     cout << "A idade de " << find_nome << " é: " << dados[find_nome] << endl;
   }
  cout << "\nElementos da tabela hash: \n";
  for (auto i = dados.end(); i != dados.begin(); i++){
    cout << (*i).first << ": " << (*i).second << " anos." << endl;
  }
}