#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main(){
  cout << std::fixed << std::setprecision(2);
  int itens_qnt = 0, pedidos = 0;
  float preço = 0, soma = 0, valor_total = 0;
  std::string del, caixa;
  
  cout << "Caixa aberto!";
  
  do {
    soma = 0;
    cout << "\n\nQuantidade de itens do pedido: ";
    cin >> itens_qnt;
    
    for (int i = 1; i <= itens_qnt; i++){
      cout << ". Preço do item " << i << ": ";
      cin >> preço;
      soma += preço;
    }
    cout << ". Cobrar delivery? ";
    cin >> del;
    
    if (del == "sim"){
      soma += 15;
    }
    valor_total += soma;
    cout << ". Valor do pedido: R$ " << soma << ".";
    cout << "\nFexar o caixa? ";
    cin >> caixa;
    pedidos++;
  } while ((caixa == "não" || caixa == "nao"));
  
  cout << "\n\nCaixa fechado!\n";
  cout << "Número de pedidos: " << pedidos << ".\n";
  cout << "Volar total vendido: R$ " << valor_total << ".\n";
}