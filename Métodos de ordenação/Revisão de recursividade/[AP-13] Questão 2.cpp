#include <iostream>
using namespace std;

bool primo(int num,int div){
  if(num<2){
    return false;
  }else if(div>=num){
    return true;
  }else if(num%div==0){
    return false;
  }
    return primo(num,div+1);
}

int main() {
  int num=0,div=2;
   cout<<"Digite um numero: ";
  cin>>num;
  
  while (num>=0){
    bool resp = primo(num,div);
    if(resp==true){
      cout<<num<<" é um número primo\n";
    }else{
      cout<<num<<" não é um número primo\n";
    }
    cout<<"Digite um numero: ";
    cin>>num;
  }
}