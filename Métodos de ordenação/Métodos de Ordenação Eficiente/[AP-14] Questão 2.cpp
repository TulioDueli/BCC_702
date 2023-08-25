#include <iostream>

using namespace std;

struct Time{
    string nome;
    int pont = 0;
};

void Merge(Time A[], int p, int q, int r){
  int n1 = q - p + 1, n2 = r - q;
  int L[n1 + 1], R[n2 + 1];
  
  for(int i = 0; i < n1; i++)
    L[i] = A[p + i].pont;

  for(int i = 0; i < n2; i++)
    R[i] = A[q + i + 1].pont;

  L[n1] = 99999999;
  R[n2] = 99999999;
  int i = 0, j = 0;
  
  for(int k = p; k <= r; k++){
    if(L[i] <= R[j]){
      A[k].pont = L[i];
      i++;
    }else{
      A[k].pont = R[j];
      j++;
    }
  }  
}

void MergeSort(Time A[], int p, int r){
  if(p < r){
    int q = (p + r)/2;
    MergeSort(A, p, q);
    MergeSort(A, q + 1, r);
    Merge(A, p, q, r);
  }
}



int main() {
  int qtd = 6;
  Time times[qtd];
  cout << "Registro dos times: \n";

  for(int i = 0; i < qtd; i++){
    cout << "\tTime " << i + 1 << ": ";
    cin >> times[i].nome;
    cout << "\tPontuação: ";
    cin >> times[i].pont;
  }
  cout << "\nClassificação: \n";

  
    MergeSort(times, 0, qtd - 1);
  for(int i = qtd-1; i >= 0; i--)
    cout << "\t" << times[i].nome << " - " << times[i].pont << " pontos"<< endl;
  
}