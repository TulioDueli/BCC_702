#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;


int main() {
  int qtd = 0, ele = 0;
  std::list<int> ls;

  
  cout << "Quantos elementos você deseja adicionar à lista? ";
  cin >> qtd;

  cout << "Digite os elementos da lista: ";
  for (int i = 0; i < qtd; i++){
    cin >> ele;
    ls.push_back(ele);
  }
  cout << "Elementos da lista: ";
  for (auto it = ls.begin(); it != ls.end(); it++)
    cout << *it << "\t";

  ls.pop_back();
  ls.pop_front();

  cout << endl;
  cout << "Elementos da lista após a remoção: ";
  for (auto it = ls.begin(); it != ls.end(); it++)
    cout << *it << "\t";

  cout << endl;
}