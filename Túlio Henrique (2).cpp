#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int encontrarMaximo(int vetor[], int qtd){
    int maior = -100000;
    for (int i = 0; i < qtd; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}


int main(){
    int qtd = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> qtd;

    int *vetor = new int[qtd];

    cout << "Digite os elementos do vetor: \n";
    for (int i = 0; i < qtd; i++){
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maior = encontrarMaximo(vetor, qtd);
    cout << "O valor m�ximo no vetor �: " << maior;
    delete[] vetor;
}


//Avalia��o:
//Entrada de dados                    0.5
//Aloca��o Din�mica                   1.0
//Chamada e defini��o da fun��o       0.5 
//La�o para achar o maior valor       0.5
//Exclus�o do vetor                   0.5
//Total                               3.0   