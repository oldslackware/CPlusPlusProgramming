#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::strcpy;

const int size =30;
const int totali=0;//fittizio            
struct impiegato_t{
       char nome[size];
       char ruolo[size];
       double salario;
        }impiegati[totali];
  
  void stampaImpiegato(impiegato_t impiegato);
        
int main(){
    int quanti;
    cout<<"\n\nInserisci il numero di impiegati "<<endl;
    cin>>quanti;
    cin.get();
    for(int i=0;i<quanti;i++){
            cout<<"Inserisci il nome del "<<i+1<<"°impiegato"<<endl;
            cin.getline(impiegati[i].nome,size);
            cout<<"\nInserisci ora il suo ruolo"<<endl;
            cin.getline(impiegati[i].ruolo,size);
            cout<<"\nInserire stipendio\n";
            cin>>impiegati[i].salario;
            cin.get();
        }      
    cout<<"Ecco tutti gli impiegati\n\n";
    for(int j=0;j<quanti;j++){
            stampaImpiegato(impiegati[j]);
      }
      
   // system("PAUSE");
    return 0;
    }
    
    void stampaImpiegato(impiegato_t impiegato){
    cout<<impiegato.nome<<" svolge il ruolo di "<<impiegato.ruolo<<" e ha un salario di "<<impiegato.salario<<endl;
      }
    

