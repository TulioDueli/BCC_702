#include <iostream>
#include <set>

using namespace std;

int main() {
  int qtd = 0, num = 0, ele = 0;
  cout << "Quantos elementos você deseja inserir na árvore binária? ";
  cin >> qtd;

  set<int> arv;
  
  cout << "\n";
  for (int i = 0; i < qtd; i++){
    cout << "Digite o elemento " << i + 1 << " : ";
    cin >> num;
    arv.insert(num);
  }
  cout << "\nDigite o elemento que você deseja buscar na árvore: ";
  cin >> ele;

  if (arv.count(ele) == 0){
    cout << "O elemento " << ele << " não está presente na árvore.\n";
  } else {
    cout << "O elemento " << ele << " está presente na árvore.\n";
  }
  cout << "\nElementos da árvore binária: \n";
  for (int i : arv)
    cout << i << "\t";
}