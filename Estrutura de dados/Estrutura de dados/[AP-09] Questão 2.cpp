#include <iostream>
#include <stack>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

bool procurar(std::stack<int, std::vector<int>> &pilha, int k){
  bool tf = false;
  std::stack<int, std::vector<int>> pilha2;
  
  do{
    int temp = pilha.top();
    if (temp == k){
      pilha.pop();
      tf = true;
    } else {
      pilha2.push(temp);
      pilha.pop();
    }
  } while (! pilha.empty() && tf == false);
  
  if (! pilha2.empty()){
    do{
      int temp2 = pilha2.top();
      pilha.push(temp2);
      pilha2.pop();
    }while (! pilha2.empty()); 
  }
    return tf;
}

int main() {
  std::stack<int, std::vector<int>> pilha;

  int k = 0, num = 0;
  
  cout << "Digite os valores inteiros (digite −1 para finalizar): \n";
  while (num != -1){
    cin >> num;
    if (num != -1){
       pilha.push(num);
    }
  }
  
  cout << "Digite o valor K a ser removido da pilha: ";
  cin >> k;

  bool rem = procurar(pilha, k);

  if (rem == true){
    cout << "O valor " << k << " foi removido da pilha.\n";
  } else {
    cout << "O valor " << k << "  não foi encontrado na pilha.\n";
  }

  std::vector<int> atual;
  
  cout << "Pilha atual: \n";
  while (! pilha.empty()){
    atual.insert(atual.begin(), pilha.top());
    pilha.pop();
  }
  for (int i = 0; i < atual.size(); i++)
    cout << atual[i] << "\t";

  cout << endl;
}