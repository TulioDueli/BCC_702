#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

struct Ponto{
  int x = 0;
  int y = 0;
};

float calculoDistancia(Ponto p1, Ponto p2){
  float x = pow((p2.x - p1.x), 2);
  float y = pow((p2.y - p1.y), 2);
  float soma = x + y;
  return sqrt(soma);
}

int main() {
  int n = 0;
  cout << "Informe o número de pontos: ";
  cin >> n;
  Ponto *pontos = new Ponto[n];
  for (int i = 0; i < n; i++){
    cout << "Informe as coordenadas: ";
    cin >> pontos[i].x;
    cin >> pontos[i].y;
  }
  float soma = 0;
  for (int i = 0; i < n - 1; i++){
    float dis = calculoDistancia(pontos[i], pontos[i + 1]);
    soma += dis;
  }
  cout << std::fixed << std::setprecision(2) << "Tamanho do caminho: " << soma;
  cout << endl;
}