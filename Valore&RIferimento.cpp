#include<iostream>
using std::cout;
using std::endl;

int quadratoPerValore(int);
void quadratoPerRiferimento(int &);

int main(){
    int x=2;
    int z=5;
    cout<<"X= "<<x<<" prima della chiamata alla funzione \n"
        <<"Valore del quadrato per valore:"<<quadratoPerValore(x)<<endl
        <<"X e' adesso uguale a:"<<x<<"\n"<<endl;
    
    cout<<"Z= "<<z<<" prima della chiamata alla funzione \n";
    quadratoPerRiferimento(z);
    cout<<"\nZ e' adesso uguale a:"<<z<<"\n"<<endl;
        
        system("PAUSE");
        return 0;
        }
        int quadratoPerValore(int x){
            return x*=x;//L'ARGOMENTO DEL CHIAMANTE NON E' MODIFICATO
            }
            
        void quadratoPerRiferimento(int &zRif){
             zRif*=zRif;//L'ARGOMENTO DEL CHIAMANTE E' ORA MODIFICATO
             cout<<"Valore del quadrato per riferimento "<<zRif;
            }
