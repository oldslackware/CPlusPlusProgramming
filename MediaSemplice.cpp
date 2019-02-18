#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int voto;
    int quanti=0;
    int somma=0;
    double media;
    cout<<"Calcola media esami maturita'\n";
    while(quanti<10){
    cout<<"Inserisci il voto\n";
    cin>>voto;
    somma+=voto;
    quanti++;
}
media=somma/10;
cout<<"La media risulta essere "<<media<<endl;
//system("PAUSE");
return 0;
}
