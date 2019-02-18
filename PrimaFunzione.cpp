#include<iostream>
using std::cout;
using std::endl;
int miaFunzione(int);
int main(){
    int numero=1;
    for(;numero<=10;numero++){
                             cout<<miaFunzione(numero)<<" ";
    
                             }
                             cout<<"\n"; 
                             system("PAUSE");
                             return 0;
}

int miaFunzione(int x){
  return x*x;
}  
