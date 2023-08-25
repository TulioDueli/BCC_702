#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

bool isPrimo(int numero, bool& primo){
  int div = 0;
  for (int i = 2; i < numero; i++){
    if (numero%i == 0){
      div++;
    }
  } 
  if (div >= 1){
    primo = false;
  } else {
    primo = true;
  }
  return primo;
}

void classifyNumbers (std::array<int, 5> &numeros){
  bool primo = true;
  for (int i = 1; i < 6; i++){
    isPrimo(numeros[i], primo);
    if (primo == true){
      cout << numeros[i] << " é um número primo.\n";
    } 
    if (primo == false){
      cout << numeros[i] << " não é um número primo.\n";
    }
  }
}

int main() {
  std::array<int, 5>numeros;
  int num;
  cout << "Verificação de número primo\n\n";
  
  for (int i = 1; i < 6; i++){
     cout << "Digite o número " << i << ": ";
     cin >> num;
     while (num < 0){
       cout << "Número inválido. Digite o número " << i << " novamente: ";
       cin >> num;
     }
     numeros[i] = num;
  }
  cout << "\n\nClassificações:\n";
  classifyNumbers(numeros);
  
}