#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Inserisci il numero di elementi che vuoi sommare\n";
    cin>>size;
    int n[size];
    int somma=0;
    for(int i=0;i<size;i++){
            cout<<"Inserisci l'elemento "<<i+1<<"\n";
            cin>>n[i];
            somma+=n[i];
   }
           cout<<"La somma di "<<size<<" elementi e' "<<somma<<endl;
          // system("PAUSE");
           return 0;
           }
