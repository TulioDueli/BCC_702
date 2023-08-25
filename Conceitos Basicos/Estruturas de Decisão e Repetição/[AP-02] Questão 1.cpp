#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
  cout << std::fixed << std::setprecision(2);
  float media_sem = 0, exm_esp = 0;
  int freq_sem = 0, rep_fal = 0;
  cout << "Média no semestre: ";
  cin >> media_sem;
  cout << "Frequência no semestre: ";
  cin >> freq_sem;
  if (media_sem >= 6 && freq_sem >= 75){
    cout << "Conceito: Aprovado\n";
  }
  else{
    if (media_sem < 6 && freq_sem >= 75){
      exm_esp = 6 - media_sem;
      cout << "Conceito: exame especial\n" << "Justificativa: média " << exm_esp <<" abaixo da mínima";
    }else{
      rep_fal = 75 - freq_sem;
      cout << "Conceito: reprovado por faltas\n" << "Justificativa: frequência " << rep_fal << "% abaixo da mínima";
    }
  }
}