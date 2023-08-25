#include <iostream>
#include <vector>

using namespace std;

struct Time{
  string nome;
  int pont = 0;
}; 

void swap(int &vec, int &vec2){
   int temp = vec;
   vec = vec2;
   vec2 = temp;
}

int partition(Time times[], int p, int r){
  int pivo = times[r].pont;
  int i = p - 1;
  for (int j = p; j <= r-1; j++){
    if(times[j].pont <= pivo){
      i = i + 1;
      swap(times[i], times[j]);
    }
    swap(times[i+1], times[r]);
  }
  return i + 1;
}

void quicksort(Time times[], int p, int r){
  if (p < r){
    int q = partition(times, p, r);
    quicksort(times, p, q -1);
    quicksort(times, q + 1, r);
  }
}

int main() {
  int qtd = 0;
  cout << "Quantidade de times: ";
  cin >> qtd;
  Time times[qtd];

  cout << "Registro dos times: \n";
  for(int i = 0; i < qtd; i++){
    cout << "\tTime " << i + 1 << ": ";
    cin >> times[i].nome;
    cout << "\tPontuação: ";
    cin >> times[i].pont;
  }
  cout << "\nClassificação:\n";

 quicksort(times, 0, qtd-1);
  for (int i = qtd - 1; i >= 0; i--)
    cout << "\t" << times[i].nome << " - " << times[i].pont << endl;
}