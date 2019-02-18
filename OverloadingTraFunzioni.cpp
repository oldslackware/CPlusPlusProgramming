#include<iostream>
using std::cout;
using std::endl;
inline int quadrato(int x){return x*x;}
inline double quadrato(double x){return x*x;}
int main(){
    cout<<"Il quadrato di 12 e': " <<quadrato(12)<<
    "\nIl quadrato di 12,5 riaulta invece:"<<quadrato(12.5)<<endl;
    system("PAUSE");
    return (0);
    }
