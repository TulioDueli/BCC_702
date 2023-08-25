#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int* getIntersection(int qtd, int &qtd2, int *v1, int *v2){
  int *vec = new int[qtd];
  
  for (int i = 0; i < qtd; i++){
    if (v1[i] == v2[i]){
      vec[qtd2] = v1[i];
      qtd2++;
    }
  }
  return vec;
}

int main() {
  int qtd = 0, qtd2 = 0;
  cout << "Quantidade de elementos: ";
  cin >> qtd;
  
  int v1[qtd], v2[qtd];
  cout << "Vetor 1: ";
  for (int i = 0; i < qtd; i++)
    cin >> v1[i];
  cout << "Vetor 2: ";
  for (int i = 0; i < qtd; i++)
    cin >> v2[i];
  
  int *vec = getIntersection(qtd, qtd2, v1, v2);
  
  if (qtd2 == 0){
    cout << "Os vetores informados não possuem elementos comuns.";
  }else{
    cout << "\nVetor 3: ";
    for (int i = 0; i < qtd2; i++)
      cout << vec[i] << " ";
  }
  delete vec;
}