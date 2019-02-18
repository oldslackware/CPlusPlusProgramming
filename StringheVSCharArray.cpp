#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
int main(){
    const int size=30;
     char utilitaria[size];
     char berlina[size]="Fiat Bravo";
     
     string sportiva;
     string lusso="Maserati Gran Turismo";
     
     cout<<"\n\n\nInserisci un'auto utilitaria\n "<<endl;
     cin.getline(utilitaria,size);
     cout<<"\nInserisci adesso un'auto sportiva\n"<<endl;
     getline(cin,sportiva);//Eliminiamo gli spazi bianchi con le stringhe
     cout<<"\n\nEcco tutte le macchine\n\n"<<utilitaria<<"\n"<<berlina<<"\n"<<sportiva<<"\n"<<lusso<<"\n\n"<<endl;
    // system("PAUSE");
     return 0;
      }
