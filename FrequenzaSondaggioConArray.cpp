#include <iostream>
using std::cout;
using std::cin;
using std:: endl;
#include<iomanip>
using std::setw;


int main(){
    int numeroStudenti;
    //diamo un voto da 1 a x.
    int frequenzaSize;
    cout<<"Inserisci il numero di studenti"<<endl;
    cin>>numeroStudenti;
    cout<<"Inserisci ora il voto massimo assegnabile"<<endl;
    cin>>frequenzaSize;
    const int maxFr=frequenzaSize+1;//ugnoro la frequenza zero

    int voti[numeroStudenti];
    for(int i=0;i<numeroStudenti;i++){
            int tmp;
            cout<<"Inserisci il voto dello studente "<<i+1<<endl;
            cin>>tmp;
            voti[i]=tmp;
            }
           int frequenza[ maxFr ];
           for(int f=0;f<maxFr;f++){
                   frequenza[f]=0;
                   }
           

            for(int risposta=0;risposta<numeroStudenti;risposta++)
            frequenza[voti[risposta]]++;
            cout<<"Voto"<<setw(17)<<"Frequenza"<<endl;
            
            for(int i=1;i<maxFr;i++){
                    if(i%11==0){
                                system("PAUSE");
                    }
                    cout<<setw(4)<<i<<setw(17)<<frequenza[i]<<endl;
                     } 
                   //  system("PAUSE");
                     return 0;
                      } 
                    
                    
            
            
            
            
            
            
