#include<iostream>
using std::cout;
using std::cin;
using std::endl;



int main(){
const int size=35;
char nome[size];
char citta[size];
    cout<<"Inserisci il tuo nome e cognome "<<endl;
    cin.getline(nome,size);
    cout<<"Inserisci la tua citta' "<<endl;
    cin.getline(citta,size);
    cout<<nome<<" abiti a "<<citta<<".Che bel posto :)"<<endl;
    system("PAUSE");
    return 0;
        }
