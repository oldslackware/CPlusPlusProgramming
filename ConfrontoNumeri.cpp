#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int primo;
    int secondo;
    cout<<"Confronto tra due numeri\n";
    cout<<"Inserisci il primo numero\n";
    cin>>primo;
    cout<<"Inserisci il secondo numero\n";
    cin>>secondo;
    cout<<"\nRisultati\n";
    if(primo==secondo)
    cout<<primo<<" e'uguale a "<<secondo<<endl;
    if(primo!=secondo)
    cout<<primo<<" e' diverso da "<<secondo<<endl;
    if(primo>secondo)
    cout<<primo<<" e' piu' grande di "<<secondo<<endl;
    if(primo<secondo)
    cout<<primo<<" e' piu' piccolo di "<<secondo<<endl;
   // system("PAUSE");

    return 0;
}                   
                       
