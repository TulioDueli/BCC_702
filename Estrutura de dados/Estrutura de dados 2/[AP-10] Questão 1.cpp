#include <iostream>
#include <stack>

using std::cout;
using std::cin;
using std::endl;
using std::stack;

int main() {
  int n=0, d=0, i=2;
  stack<int> fator;

  cout << "Digite um número inteiro: ";
  cin >> n;
  
  d = n;

while(i < d){
    while(n%i == 0){
      n = n/i;
      fator.push(i);
      
    }
  i++;
}
  cout << "Fatoração Prima de " << d << ": ";
  while(! fator.empty()){
    cout << fator.top();
    fator.pop();
    if (! fator.empty()){
      cout << " * ";
    };
  }
  cout << endl;
}