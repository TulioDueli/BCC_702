#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed; using std::setprecision;

void temDireitoValeTransporte(float salario_bruto,bool& vale){
  if(salario_bruto > 1500){
    vale = true;
  } else{
      vale = false;
    }
}
void calcularSalarioLiquido(float salario_bruto, float& salario_liq, int dependentes, bool vale){
  salario_liq = salario_bruto - salario_bruto * 0.1 - salario_bruto * 0.05 - dependentes * 50;
  if (vale == true){
    salario_liq -= 100;
  }
}


int main(){
  cout << fixed << setprecision(2);
  float salario_bruto = 0, salario_liq = 0;
  int dependentes = 0;
  bool vale;
  cout << "Digite o salário bruto: ";
  cin >> salario_bruto;
  cout << "Digite o número de dependentes: ";
  cin >> dependentes;
  temDireitoValeTransporte(salario_bruto, vale);
  calcularSalarioLiquido(salario_bruto, salario_liq, dependentes, vale);
  cout << "O salário líquido é: " << salario_liq;
}