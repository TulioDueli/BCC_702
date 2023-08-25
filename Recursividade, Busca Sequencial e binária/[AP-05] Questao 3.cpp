#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int somatorio(int N){
  int r = 1;
  if (N == 1){
    return 1;
  }else{
    return (N + somatorio(N-1));
  }
}

int main() {
  int N;
  cout << "Digite um número: ";
  cin >> N;
  int resul = somatorio(N);
  cout << "O somatóirio dos números de 1 a " << N << " é: " << resul;
  
}