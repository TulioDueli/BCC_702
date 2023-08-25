#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::fixed;

void calcularSalario(int fun, float val_hora, int& horas_trab, int& prod, float& salario){
  for (int i = 1; i <= fun; i++){
    salario = 0;
    cout << "\nFuncionário " << i;
    cout << "\nInforme o número de horas trabalhadas: ";
    cin >> horas_trab;
    cout << "Informe o número de produtos produzidos: ";
    cin >> prod;
    if (horas_trab <= 40){
      salario = val_hora * horas_trab;
    }else{
      salario = (val_hora * 40) + ((horas_trab - 40) * 1.5) * val_hora;
    }
    salario += 2 * prod;
    cout << "Salário: R$ " << salario << std::endl;
  }
}

int main() {
  cout << fixed << std::setprecision(2);
  float val_por_hora = 0, salario = 0;
  int funcionarios = 0, horas_trab = 0, prod = 0;
  cout << "Informe o número de funcionários: ";
  cin >> funcionarios;
  cout << "Informe o valor fixo por hora: ";
  cin >> val_por_hora;
  calcularSalario(funcionarios, val_por_hora, horas_trab, prod, salario);
}