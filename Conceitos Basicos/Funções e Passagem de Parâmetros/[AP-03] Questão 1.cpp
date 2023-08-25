#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::fixed;

void calcularExcedente(float total){
    cout << "\nValor excedente: " <<  total - 1000 << std::endl;
    cout << "Valor com desconto: " << total - ((total - 1000) * 0.1);
}

int main() {
  cout << fixed << std::setprecision(2);
  float materia_prima = 0, mao_obra = 0, ene_ele = 0, total = 0; 
  cout << "Digite o custo da matéria-prima: ";
  cin >> materia_prima;
  cout << "Digite o custo da mão de obra: ";
  cin >> mao_obra;
  cout << "digite o custo da energia elétrica: ";
  cin >> ene_ele;
  total = materia_prima + mao_obra + ene_ele;
  cout << "Custo total: " << total;
  if (total > 1000){
    calcularExcedente(total);
  }
  cout << std::endl;
}