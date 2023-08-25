#include <iostream>
#include <stack>
#include <queue>

using namespace std;

queue<int> inverterFila(queue<int> &queue){
  stack<int, vector<int>> inv; 
  int temp = 0;

  while (! queue.empty()){
    temp = queue.front();
    queue.pop();
    inv.push(temp);
  }
  while (! inv.empty()){
    temp = inv.top();
    queue.push(temp);
    inv.pop();
  }
  return queue;
}

void imprimirFila(queue<int> queue){

  while (!queue.empty()){
    cout << queue.front() << " ";
    queue.pop();
  }
}

int main() {
  int qtd=0;
  cout<<"Quantos elementos deseja inserir na fila ? ";
  cin>>qtd;
  queue<int> queue;
  int num = 0;

  cout<<"Digite os elementos da fila: "<<endl;
 for (int i=0;i<qtd; i++){
      cin>>num;
      queue.push(num);
    }
  
  cout<<"Fila antes da inversão: ";
  imprimirFila(queue);
  inverterFila(queue);
  cout<<"\nFila depois da inversão: ";
  imprimirFila(queue);
}