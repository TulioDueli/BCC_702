#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

void getMetrics (std::vector<float> &notas, float& media, float& maior, float& menor){
  for (int i = 0; i < notas.size(); i++){
    media += notas[i];
    
    if (notas[i] > maior){
      maior = notas[i];
    }
    if (notas[i] < menor){
      menor = notas[i];
    }
  }
  media /= notas.size();
}

int main(){
  int x = 1;
  float nota = 0, media = 0, maior = -1000, menor = 1000;
  char outra;
  std::vector<float> notas;
  
  cout << "Digite as notas dos alunos (entre 0 e 100): \n\n";
  do{
    cout << "Digite a nota " << x << ": ";
    cin >> nota;
    
    while (nota < 0 || nota > 100){
      cout << "Nota inválida. Digite novamente a nota " << x << ": ";
      cin >> nota;
    }
    notas.push_back(nota);
    
    cout << "Deseja digitar outra nota? (s/n): ";
    cin >> outra;
    x++;
  } while(outra == 's');
  
  getMetrics (notas, media, maior, menor);
  cout << fixed << std::setprecision(2)<< "\n\nMédia das notas: " << media;
  cout << fixed << std::setprecision(0) << "\nMaior nota: " << maior;
  cout << fixed << std::setprecision(0) << "\nMenor nota: " << menor;
}