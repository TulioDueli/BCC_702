#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
  cout << std::fixed << std::setprecision(2);
  int quant_par = 0, imp = 0, fal = 0, car = 0;
  float imp1 = 0, fal1 = 0, car1 = 0;
  float tempo = 0, tempo1 = 0;
  char juiz[99];
  cout << "Informe o nome do juiz: ";
  cin >> juiz;
  cout << "Quantidade de partidas: ";
  cin >> quant_par;
  for (int i = 1; i <= quant_par; i++){
    cout << "\nPartida " << i << ":\n";
    cout << ". Impedimentos.......: "; cin >> imp;
    cout << ". Faltas.............: "; cin >> fal;
    cout << ". Cartões............: "; cin >> car;
    cout << ". Tempo de acréscimo.: "; cin >> tempo;
    imp1 += imp;
    fal1 += fal;
    car1 += car;
    tempo1 += tempo;
  }
  cout << "\nEstatísticas do juiz " << juiz << ":\n";
  cout << ". Impedimentos.......: " << imp1 / quant_par << ".";
  cout << "\n. Faltas.............: " << fal1 / quant_par << ".";
  cout << "\n. Cartões............: " << car1 / quant_par << ".";
  cout << "\n. Tempo de acréscimo.: " << tempo1 / quant_par << ".\n";
}