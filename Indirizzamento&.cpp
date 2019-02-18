#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int cicla=0;
    while(cicla<10){
    int numero;
    cout<<"Inserisci un numero "<<endl;
    cin>>numero;
    cout<<"Hai inserito "<<numero<<".\nIl suo indirizzo di memoria e' "<<&numero<<endl;
    system("Pause");
       cicla++;
       }
    
    return 0;
    }
