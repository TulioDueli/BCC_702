#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
  int array[5];
  int *p = array;
  for (int i = 0; i < 5; i++){
    cout << "Elemento " << i + 1 << ": ";
    cin >> array[i];
  }
  cout << "\nVetor: ";
  for (int i = 0; i < 5; i++){
    cout << (*p++) * 2 << "\t";
  }
}