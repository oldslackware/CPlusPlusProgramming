#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int pass=0;
    int fall=0;
    int conta=1;
    int esito;
    cout<<"Programma esito esami\n";
    while(conta<=10){
    cout<<"Premere 1 se l'esame e' stato passato 0 altrimenti\n";
    cin>>esito;
    if(esito==1){
                 pass++;
}
else if(esito==0){
     fall++;
     }else{
           cout<<"Valore non valido.Programma terminato\n";
           }
           conta++;
           }
           if(pass>=8){
                       cout<<"L'esame ha avuto un esito positivo\nPassato "<<pass<<"\nFallito "<<fall<<"\n";
                       }else{
                             cout<<"L'esame ha avuto un'esito negativo\nPassato "<<pass<<"\nFallito "<<fall<<"\n";
                             }
                             //system("PAUSE");
                             return 0;
                             }
