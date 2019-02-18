#include<iostream>
using std::cout;
using std::endl;
using std::cin;
inline double cubo(const double valore){return valore*valore*valore;}
inline double quadrato(const double valore){return valore*valore;}

int main(){
    cout<<"Uso delle funzioni inline\n";
    double valore;
    cout<<"Inserisci un valore"<<endl;
    cin>>valore;
    cout<<"Il quadrato di "<<valore<<" e' "<<quadrato(valore)<<endl;
    cout<<"\nIl cubo di "<<valore<<" e' "<<cubo(valore)<<endl;
    system("PAUSE");
    return 0;
}
