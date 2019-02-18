#include<iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::cin;

#include<iomanip>
using std::setprecision;
using std::setw;


#include "SondaggioLibro.h"
SondaggioLibro::SondaggioLibro(string tit,int v[]){
setTitoloLibro(tit);
for(int i=0;i<studenti;i++){
        voti[i]=v[i];//copio i dati passati al costruttore
 }                                     
}
void SondaggioLibro::setTitoloLibro(string nome){
     titoloLibro=nome;
     }

string SondaggioLibro::getTitoloLibro(){
       return titoloLibro;
           }
           
void SondaggioLibro::stampaIntro(){
     cout<<"Questo sondaggio si riferisce al libro "<<getTitoloLibro()<<endl;
         }
int SondaggioLibro::getMinimo(){
    int min=100;
    for(int i=0;i<studenti;i++){
            if(voti[i]<min){
            min=voti[i];
            }
            
    }
    return min;
    }
int SondaggioLibro::getMassimo(){
    int max=0;
    for(int i=0;i<studenti;i++){
            if(voti[i]>max){
            max=voti[i];    
            }
    }
    return max;
}

double SondaggioLibro::getMedia(){
       double somma;
       for(int i=0;i<studenti;i++){
               somma+=voti[i];
                       }
              return static_cast<double>(somma)/studenti;
       }        
void SondaggioLibro::risultati(){
      stampaStudentiEVoto();
      cout<<"\nIl voto maggiore risulta "<<getMassimo()<<"\nIl minore risulta "<<getMinimo()<<endl;
      cout<<"La media dei voti e' "<<setprecision(2)<<fixed<<getMedia()<<endl;
      stampaIstogramma();
          }
      
      
                         
            
void SondaggioLibro::stampaStudentiEVoto(){
     cout<<"\nI voti attributi dagli studenti sono:\n\n"<<endl;
     for(int i=0;i<studenti;i++){
             cout<<"Studente "<<setw(3)<<i+1<<":"<<setw(3)<<voti[i]<<endl;
                 }
                     }

void SondaggioLibro::stampaIstogramma(){
     cout<<"\nIstogramma  sondaggio\n"<<endl;
     const int elementi=11;
     int frequenza[elementi]={  0  };
     for(int i=0;i<studenti;i++)
     frequenza[voti[i]/10]++;
     for ( int count = 0; count < elementi; count++ )    {
      // output bar labels ("0-9:", ..., "90-99:", "100:" )
        if ( count == 0 )
           cout << "  0-9: ";
      else if ( count == 10 )
           cout << "  100: ";
         else
           cout << count * 10 << "-" << ( count * 10 ) + 9 << ": ";

         // print bar of asterisks         
         for ( int stars = 0; stars < frequenza[ count ]; stars++ )
         cout << '*';

        cout << endl; 
                         
     }
     }                           
    
    
         
                
