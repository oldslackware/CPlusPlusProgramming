#include<iostream>
using std::cout;
using std::endl;
#include<cstdlib>
#include<ctime>

int lancioDadi(void);

int main(){
    enum Stato{CONTINUA,VITTORIA,SCONFITTA};
    int somma,punteggio;
    Stato statoPartita;
    
    srand(time(NULL));
    somma=lancioDadi();
    
    switch(somma){
                  case 7:
                  case 11:
                         statoPartita=VITTORIA;
                         break;
                 
                 case 2:
                 case 3:
                 case 12:
                         statoPartita=SCONFITTA;
                         break;
                default:
                        statoPartita=CONTINUA;
                        punteggio=somma;
                        cout<<"Il tuo punteggio e' "<<somma<<"\n";
                        break;
                        }
                        while(statoPartita==CONTINUA){
                            somma=lancioDadi();
                            if(somma==punteggio){
                                  statoPartita=VITTORIA;
                                  }
                                  if(somma==7){
                                        statoPartita==SCONFITTA;
                                        }
                            }
                        
                        if(statoPartita==VITTORIA){
                              cout<<"Hai vinto la partita\n";
                              }
                              if(statoPartita==SCONFITTA){
                                cout<<"Hai perso\n";
                                }
                               // system("PAUSE");
                                return 0;
                                }
                
              int lancioDadi(void){
                    int dado1=rand()%6+1;
                    int dado2=rand()%6+1;
                    int myPoints=dado1+dado2;
                    cout<<"Hai lanciato i dadi:\nHai fatto "<<dado1<<" e "<<dado2<<" ovvero "<<myPoints<<endl;
                    return myPoints;
                    }
                    
                                
                                
                                
                                
                        
                        
                        
                        
                        
                        
                        
                        
                             
                            
                                  
                                                           
                        
