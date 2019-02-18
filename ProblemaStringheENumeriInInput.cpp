#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int via;
    int size=50;
    char indirizzo[size];
    cout<<"Inserisci il tuo numero civico "<<endl;
    cin>>via;
    cin.get();//Senza la get non riesco a inserire l'indirizzo perche' cin legge anche l'invio
    cout<<"Inserisci ora il tuo indirizzo "<<endl;
    cin.getline(indirizzo,size);
    cout<<"Verra' spedito un pacco bomba a "<<indirizzo<<" numero "<<via<<endl;
    //system("PAUSE");
    return 0;
     }
