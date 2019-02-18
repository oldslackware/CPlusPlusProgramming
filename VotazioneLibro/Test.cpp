#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "SondaggioLibro.h"
int main(){
    string s;
    cout<<"Inserisci il titolo del libro delimitando gli spazi dal carattere _"<<endl;
    cin>>s;
    int voti[SondaggioLibro::studenti];
    for(int i=0;i<10;i++){
            int tmp;
            cout<<"Inserisci il voto numero: "<<i+1<<endl;
            cin>>tmp;
            voti[i]=tmp;
    }
    
    SondaggioLibro myLibro(s,voti);
    myLibro.stampaIntro();
    myLibro.risultati();
//    system("PAUSE");
    return 0;
        }
