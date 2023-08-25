#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

struct Carro {
  std::string marca;
  int ano;
  float dist = 0, consm = 1;
};

int main() {
  Carro carro;
  float quil_litro = 0;
  cout << "Digite a marca: ";
  cin >> carro.marca;
  cout << "Digite o ano: ";
  cin >> carro.ano;
  cout << "Digite a distância: ";
  cin >> carro.dist;
  cout << "Digite o consumo: ";
  cin >> carro.consm;
  
  quil_litro = carro.dist / carro.consm;
  cout << std::fixed << std::setprecision(4) << "Quilômetros por litro: " << quil_litro << endl;
  
}