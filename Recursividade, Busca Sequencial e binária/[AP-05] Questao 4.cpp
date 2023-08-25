#include <iostream>

using std::cout;
using std::cin;

int buscaBinaria(int array[],int front, int back, int chave){
  int meio = (back + front) / 2;
  if (array[meio] == chave){
    return meio;
  }else {
    if (array[meio] > chave && front < back){
      return buscaBinaria(array, front = meio + 1, back, chave);
    }
    if (array[meio] < chave && front < back){
      return buscaBinaria(array, front, back = meio - 1, chave);
    }
      return -1;
  }
}

int main() {
  int tam = 0, front = 0, back = 0, chave = 0;
  cout << "Digite o tamanho do array: ";
  cin >> tam;
  back = tam - 1;
  int array[tam];
  cout << "Digite os elementos do array separados por espaços: ";
  for (int i = 0; i < tam; i++){
    cin >> array[i];
  }
  cout << "Digite a chave que deseja buscar: ";
  cin >> chave;
  int ind = buscaBinaria(array, front, back, chave);
  if (ind == -1){
     cout << "A chave informada não se encontra no array..";
  } else{
     cout << "A chave " << chave << " foi encontrada no índice " << ind << " do array.";
  }
}