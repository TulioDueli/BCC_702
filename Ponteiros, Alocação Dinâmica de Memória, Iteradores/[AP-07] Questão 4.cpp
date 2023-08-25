#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void preencheValor(int *vetor, int tamanho){
  cout << "Digite os elementos do vetor: ";
  for (int i = 0; i < tamanho; i++)
     cin >> vetor[i];
}

int main(){
  int qtd = 0;
  cout << "Quantidade de elementos: ";
  cin >> qtd;

  int* vec = new int[qtd];
  
  preencheValor(vec, qtd);
  
  for (int *it = vec; it != &vec[qtd]; it++){
    cout << *it << "\t";
  }
  cout << endl;

  delete[] vec;
  
}