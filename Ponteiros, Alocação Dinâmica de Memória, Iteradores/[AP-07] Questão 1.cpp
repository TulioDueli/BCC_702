#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void maiorMenor(int *x, int *y){
  int temp = *x;
  if (*y > *x){
    *x = *y;
    *y = temp;
  }
}

int main() {
  int val1 = 0, val2 = 0;
  cout << "Digite o primeiro valor: ";
  cin >> val1;
  cout << "Digite o segundo valor: ";
  cin >> val2;
  cout << "v1: " << val1 << "\tv2: " << val2;
  maiorMenor(&val1, &val2);
  cout << "\nv1: " << val1 << "\tv2: " << val2 << endl;
  
}