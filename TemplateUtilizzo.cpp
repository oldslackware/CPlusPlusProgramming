#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <class T>
T massimo(T valore1,T valore2,T valore3){
            T max=valore1;
            if(valore2>max){
            max=valore2;
            }
            if(valore3>max){
            max=valore3;
            }
            return max;
            }
            
 int main(){
     int primo,secondo,terzo;
     cout<<"Inserisci tre numeri interi separati da spazio:>";
     cin>>primo>>secondo>>terzo;
     cout<<"\nIl massimo dei tre valori e' "<<massimo(primo,secondo,terzo);
     
     double primoD,secondoD,terzoD;
      cout<<"\nInserisci tre numeri double separati da spazio:>";
     cin>>primoD>>secondoD>>terzoD;
     cout<<"\nIl massimo dei tre valori e' "<<massimo(primoD,secondoD,terzoD);
     
     char primoC,secondoC,terzoC;
      cout<<"\nInserisci tre caratteri separati da spazio:>";
     cin>>primoC>>secondoC>>terzoC;
     cout<<"\nIl massimo dei tre valori e' "<<massimo(primoC,secondoC,terzoC)<<"\n";
        
     system("PAUSE");
     return 0;
      } 
        
                                 
