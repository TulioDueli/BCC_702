#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int soma(int tam, std::vector<int> &vector){
  if (tam == 0){
    return 0;
  }else{
    return (vector[tam - 1] + soma(tam - 1, vector));
  }
}

int main() {
  int tam = 0, elemento;
  std::vector<int> vector;
  cout << "Digite o tamanho vetor: ";
  cin >> tam;
  if (tam <= 0){
    cout << "ERRO: Valor inválido informado.";
  } else{
    cout << "Digite os elementos do vetor:\n";
    for (int i = 0; i < tam; i++){
      cout << "Elemento " << i << ":";
      cin >> elemento;
      vector.push_back(elemento);
    }
    int resul = soma(tam, vector);
    cout << "A soma dos elementos do vetor é: " << resul;
  }
}