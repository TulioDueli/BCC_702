#include <iostream>
#include <iomanip>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

struct paciente{
    std::string nome;
    float peso = 0;
    float alt = 0;
};


int main(){
    std::ofstream arquivo("pacientes.txt");

    int qtd = 0;
    float imc = 0;
    std::string clas;
    cout << "Quantidade de pacientes: ";
    cin >> qtd;

    paciente pacientes[qtd];
    std::string cond[qtd];
    float imcv[qtd];

    for (int i = 0; i < qtd; i++){
        cout << "Paciente " << i + 1 << ": \n";
        cout << "\tNome: ";
        cin >> pacientes[i].nome;
        cout << "\tPeso: ";
        cin >> pacientes[i].peso;
        cout << "\tAltura: ";
        cin >> pacientes[i].alt;

        imc = pacientes[i].peso / (pacientes[i].alt * pacientes[i].alt);
        if (imc < 16){
            clas = "Magreza grave";
        } else if(imc >= 16 && imc < 18.5){
            clas = "Abaixo do peso";
        } else if(imc >= 18.5 && imc < 25){
            clas = "Saudável";
        } else if(imc >= 25 && imc < 30){
            clas = "Sobrepeso";
        } else if(imc >= 30 && imc < 40){
            clas = "Obesidade";
        } else if(imc >= 40){
            clas = "Obesidade extrema";
        }
        cond[i] = clas;
        imcv[i] = imc;

        cout << std::fixed << std::setprecision(2) << "O IMC é " << imc << " (" << clas << ")" << endl;
    }
    cout << "Leitura realizada com sucesso!\n";

    if (arquivo.is_open()){
        for (int i = 0; i < qtd; i++){
            arquivo << pacientes[i].nome << "\t" << imcv[i] << "\t" << cond[i] <<endl ;   //arquivo << pacientes[i].nome << "\t" << std::fixed << std::setprecision(2) << imcv[i] << "\t" << cond[i] <<endl ;
        }
    }

    arquivo.close();
}


//Avaliação:
//Entrada dos dados                            0.5 
//Estrutura condicional para as faixas de IMC  0.5
//Criação do arquivo                           1.0
//Escrita no arquivo                           0.9
//Fechamento do arquivo                        0.5 
//Total                                        3.4  