#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstring>
using std::strlen;
int main(){
    const int size=20;
    char nome[size];//array vuoto che si ferma al carattere spazio
    char nomeHost[size]="Willy The Wall";//array inizializzato e visualizza tutti i caratteri
    cout<<"Benvenuto in "<<nomeHost<<endl;
    cout<<"Inserisci il tuo nome "<<endl;
    cin>>nome;
    cout<<"Il tuo nome contiene "<<strlen(nome)<<" caratteri"<<endl;
    cout<<"Per salvare il tuo nome e' necessario avere "<<sizeof(nome)<<" bytes"<<endl;
    //tronco il nome dell'host inserendo il carattere nullo
    nomeHost[6]='\0';
    //l'array nome host mette il carattere nullo dopo la y di willy trascurando gli altri char 
    cout<<"Questi sono i miei primi 6 caratteri:"<<nomeHost
    <<"\nPercio' in amicizia puoi chiamarmi "<<nomeHost<<endl;
    
    
//    system("PAUSE");
    return 0;
        }
