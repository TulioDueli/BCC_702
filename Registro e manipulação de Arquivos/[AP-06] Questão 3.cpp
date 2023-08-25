#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;

//ofstream(do sistema para o arquivo), ifstream(do arquivo para o sistema), fstream(os dois);


int main() {
  ofstream arquivo;
  arquivo.open("dados.txt");
  for (int i = 1; i < 101; i++){
    arquivo << i << endl;
  }
  arquivo.close();
}