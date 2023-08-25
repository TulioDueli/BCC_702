#include <iostream>

using namespace std;

int produto(int vec[], int qtd){
  if (qtd == 0){
    return 1;
  } else {
    return vec[0] * produto(vec + 1, qtd - 1);
  }
}

int main() {
  int qtd = 0;
  cout << "Digite a quantidade de elementos: ";
  cin >> qtd;
  
  int vec[qtd];
  cout << "Digite os valores: ";
  for (int i = 0; i < qtd; i++)
    cin >> vec[i];

  int mult = produto(vec, qtd);
  cout << "Produto dos valores informados: " << mult << endl;
}