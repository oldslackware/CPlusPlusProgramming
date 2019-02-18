#include<iostream>



using std::cout;
using std::cin;
using std::endl;
int main(){
    int numero;
    cout<<"Inserisci un numero "<<endl;
    cin>>numero;
    
    int *pnumero;
    pnumero=&numero;//assegno l'indirizzo di int pnumero
    //Due modi di rappresentare il valore
    cout<<"Valore della variabile numero "<<numero<<endl;
    cout<<"Assegnando la variabile numero al puntatore avremo che il puntatore vale "<<*pnumero<<endl;
    
    //due modi per ottenere l'indirizzo
    cout<<"Indirizzo di &numero:="<<&numero<<endl;
    cout<<"Indirizzo del puntatore:="<<pnumero<<endl;
    
    //incrementiamo il puntatore
    *pnumero=*pnumero+1;  
    cout<<"Adesso il puntatore vale "<<*pnumero<<endl;
    cout<<"E il suo indirizzo vale ancora "<<pnumero<<endl;
    
    //system("PAUSE");
    return 0;
       }
