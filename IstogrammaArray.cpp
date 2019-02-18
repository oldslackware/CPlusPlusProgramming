#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>
using std::setw;
int main(){
    int size;
    cout<<"Inserisci quanti elementi vuoi rappresentare\n";
    cin>>size;
    int v[size];
    for(int i=0;i<size;i++){
            cout<<"Inserisci l'elemento "<<i+1<<endl;
            cin>>v[i];
    }
    cout<<"\nElemento"<<setw(13)<<"Valore"<<setw(16)<<"Istogramma\n";
    for(int i=0;i<size;i++){
            cout<<setw(7)<<i+1<<setw(12)<<v[i]<<setw(9);
            
            for(int j=0;j<v[i];j++)
            cout<<"*";
                      cout<<endl;
       }
     //  system("PAUSE");
       return 0;
          }
