#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int potencia(int base, int expoente){
  if (expoente == 0){
    return 1;
  } else{
    return (base * potencia(base, expoente - 1));
  }
}

int main(){
  int base = 0, expoente = 0;
  cout << "Digite a base: ";
  cin >> base;
  cout << "Digite o expoente: ";
  cin >> expoente;
  if (expoente < 0){
    cout << "ERRO: valor de expoente inválido" << endl;
  } else{
    int resul = potencia(base, expoente);
    cout << base << " elevado a " << expoente << " é igual a: " << resul << endl;
  }
}