#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
#include<cstdlib>
int main(){
    for(int i=1;i<=200;i++){
            cout<<setw(3)<<(rand()%6+1);//distanzio di tre e genero numeri randomi da 1 a 6
            if(i%20==0){
                       cout<<endl;
                       }
                       }
                     //  system("PAUSE");
                       return 0;
                       }
