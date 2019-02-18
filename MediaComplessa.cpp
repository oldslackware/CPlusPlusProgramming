#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include<iomanip>
using std::setprecision;
int main(){
    int voto;
    int quanti=0;
    int somma=0;
    double media;
    cout<<"Programma media con esito in virgola mobile\n";
    cout<<"Inserisci un voto,altrimenti digita -1 per terminare\n";
    cin>>voto;
    while(voto!=-1){
    somma+=voto;
    quanti++; 
    cout<<"Inserisci un voto,altrimenti digita -1 per terminare\n";
    cin>>voto;
}
    if(quanti!=0){
    media=static_cast<double>(somma)/quanti;
    cout<<"La media su "<<quanti<<" elementi risulta "<<setprecision(2)<<fixed<<media<<endl;
}
    else{//non ho inserito nessun voto:quanti==0
    cout<<"Non hai inserito nessun voto\n";
}
   // system("PAUSE");
    return 0;
}
