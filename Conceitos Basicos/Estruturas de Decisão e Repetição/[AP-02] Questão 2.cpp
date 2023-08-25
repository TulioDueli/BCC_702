#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
  cout << std::fixed << std::setprecision(2);
  float T = 0, C = 0, t = 0, J = 0, total = 0;
  int m = 0;
  cout << "Capital Total para empréstimo: ";
  cin >> T;
  cout << "Capital emprestado: ";
  cin >> C;
  while (C <= T){
    cout << "Quantidade de meses para quitação: ";
    cin >> m;
    if (C <= 10000){
      t = 0.1;
    }else{
      t = 0.07;
    }
    J = C * t * m;
    total = J + C;
    T -= C;
    cout << std::setprecision(0) << "Taxa de juros aplicada: " << t * 100 << "%"; 
    cout << std::setprecision(2) << "\nJuros devido: " << J << "\nValor total: " << total;
    cout << "\nCapital emprestado: ";
    cin >> C;
  }
  cout << "Empréstimo negado, capital total é de R$ " << T << ".";
}