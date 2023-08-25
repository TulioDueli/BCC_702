#include <iostream>

using namespace std;

int mdc(int a, int b){
  ;if (b == 0){
    return a;
  } else{
    return mdc(b, a%b);
  }
  
}

int main() {
  int a = 0, b = 0;
  
  cout << "Digite o primeiro número: ";
  cin >> a;
  cout << "Digite o segundo número: ";
  cin >> b;

  int MDC = mdc(a, b);
  cout << "\nMDC(" << a << ", " << b << ") = " << MDC << endl;
}