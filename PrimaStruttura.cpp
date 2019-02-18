#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::strcpy;
const int size=50;

struct persona_t{
       char nome[size];
       int eta;
           }maschio,femmina;

void stampaPersona(persona_t persona);           
       
int main(){
   cout<<"\n\nInserisci un nome maschile \n"<<endl;
   cin.getline(maschio.nome,size);
   cout<<"Inserisci l'eta' della persona\n"<<endl;
   cin>>maschio.eta;                        
   cin.get();//Senza la get non riesco a inserire l'indirizzo perche' cin legge anche l'invio     
   cout<<"\n\nInserisci ora un nome femminile \n"<<endl;
   cin.getline(femmina.nome,size);
   cout<<"Inserisci adesso la sua eta' "<<endl;
   cin>>femmina.eta;
  
   stampaPersona(maschio);       
   stampaPersona(femmina);
    maschio=femmina;//copio di struttura
    cout<<"\n\nCopia della femmina nel maschio "<<endl;
    stampaPersona(maschio);
    
   system("PAUSE");
    
    
    return 0;
    }
    
    void stampaPersona(persona_t persona){
         cout<<"\n\nInformazioni about person "<<endl;
         cout<<"Ciao mi chiamo "<<persona.nome<<" e ho "<<persona.eta<<endl;
             }                
                    
                         
