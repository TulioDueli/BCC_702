#include <iostream>
#include <map>

using namespace std;

int main() {
  int qtd = 0, chave = 0, rem = 0;
  cout << "Digite o número de elementos da árvore: ";
  cin >> qtd;

  map<int, int> arv;
  
  cout << endl;
  for (int i = 0; i < qtd; i++){
    cout << "Digite a chave do elemento " << i + 1 << " : ";
    cin >> chave;
    arv.insert({chave, chave*chave});
  }
  cout << "\nDigite o elemento para remoção: ";
  cin >> rem;

  if (arv.count(rem) == true){
      arv.erase(rem);
      cout << "\nÁrvore binária após a remoção: \n";
      for (auto i : arv){
        cout << "Chave: " << i.first << ", Valor: " << i.second << endl;
      }
  } else {
    cout << "Chave não encontrada!";
  }
}