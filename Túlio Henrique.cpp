#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int potencia(int base, int expoente){
    if (expoente == 0){
    return 1;
    } else{                                     //else if (expoente > 0){
    return potencia(base, expoente - 1) ;       //return base * potencia(base, expoente - 1) ;
    }
}


int main(){
    int base = 0, expoente  = 0;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> expoente;

    int resul = potencia(base, expoente);

    cout << base << " elevado a " << expoente << " é igual a: " << resul;

}

//Avaliação:
//Entrada dos dados                             0.5
//Primeiro caso base (exp == 0 ou exp == 1)     1.0
//Segundo caso base  (exp > 0)                  0.0    
//Terceiro caso base (exp < 0)                  0.0
//Total                                         1.5
