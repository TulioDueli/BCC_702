#include <iostream>
#include <stack>
#include <queue>

using std::cout;
using std::cin;
using std::endl;


std::queue<int> inverterFila(std::queue<int> fila){
  std::stack<int, std::vector<int>> inv; 
  std::queue<int> fila_inv;
  int temp = 0;

  while (! fila.empty()){
    temp = fila.front();
    fila.pop();
    inv.push(temp);
  }
  while (! inv.empty()){
    temp = inv.top();
    fila_inv.push(temp);
    inv.pop();
  }
  return fila_inv;
}

void imprimirFila(std::queue<int> fila){
  std::queue<int> invertida;

  invertida = inverterFila(fila);

  cout << "Fila original: ";
  while (! fila.empty()){
    cout << fila.front() << " ";
    fila.pop();
  }
  cout << "\nFila invertida: ";
  while (! invertida.empty()){
    cout << invertida.front() << " ";
    invertida.pop();
  }
}

int main() {
  std::queue<int> fila;
  int num = 0;

  while (num != -1){
    cout << "Digite um valor inteiro: ";
    cin >> num;
    if (num != -1){
      fila.push(num);
    }
  }
  
  imprimirFila(fila);
  
}