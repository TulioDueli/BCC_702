#include <iostream>

using namespace std;

void swap(int &vec, int &vec2){
   int temp = vec;
   vec = vec2;
   vec2 = temp;
}

int bubbleSort(int vec[], int qtd){
  int temp = 0, valor = 0;

    for(int j = 1; j < qtd; j++){
      for(int i = 0; i < qtd-1; i++){
        if(vec[i] > vec[i+1]){
          swap(vec[i], vec[i+1]);
          valor++;
        }
      }
    }
  return valor;
}

int selectionSort(int vec[], int qtd){
  int valor=0, min=0;

  for(int i=0; i < qtd; i++){
    min = i;
    for(int j = i+1; j < qtd; j++){
      if(vec[j] < vec[min]){
        min = j;
      }
    }  
    if(min != i){ 
      swap(vec[min], vec[i]);
      valor++;
    }
  }
  return valor;
}

int insertionSort(int vec[], int qtd){
  int valor = 0, j;

  for(int i = 1; i < qtd; i++){
    j = i;
    while(j > 0 && vec[j] < vec[j-1]){
      swap(vec[j], vec[j-1]);
      j--;
      valor++;
  }
}

  return valor;
}



int main() {
  int qtd = 0, ordem = 0, func = 0, troca = 0;
  cout << "Digite a quantidade de elementos: ";
  cin >> qtd;

  int vec[qtd];

  cout << "Digite os " << qtd << " elementos separados por espaço: \n";
  for(int i = 0; i < qtd; i++){
    cin >> vec[i];
  }
  cout << endl;
  
  cout << "1 - Crescente \n" 
       << "2 - Decrescente \n";
  cout << "Escolha a ordem de ordenação: ";
  cin >> ordem;

  cout << "\n1 - Bubble Sort \n" 
       << "2 - Selection Sort \n"
       << "3 - Insertion Sort \n";
  cout << "Escolha o metodo de ordenação: ";
  cin >> func;

  if(func == 1){
    troca = bubbleSort(vec, qtd);
  } else if(func == 2){
    troca = selectionSort(vec, qtd);
  } else{
    troca = insertionSort(vec, qtd);
  }
  cout << "\nVetor ordenado: ";

  if(ordem == 1){
    for(int i=0; i < qtd; i++){
      cout << vec[i] << " ";
    }
    cout << "\nMétodo de ordenação: Crescente";
  } else{
    for(int i = qtd-1; i >= 0; i--)
      cout << vec[i] << " "; 
     
    cout << "\nMétodo de ordenação: Decrescente";
  }
  cout << endl;
  cout << "Número de trocas: " << troca;

  
}