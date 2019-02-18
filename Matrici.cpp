#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>
using std::setw;
const int colonne=3;
void leggi(int[][colonne]);
void stampa(int[][colonne]);
void somma(int[][colonne],int[][colonne],int [][colonne]);
void prodotto(int[][colonne],int[][colonne],int[][colonne]);

int main(){
    cout<<"Programma per matrici 3*3"<<endl;

    cout<<"Inserisci i valori della matrice separati da spazio"<<endl; 
    int righe=colonne;
    int m[righe][colonne];
    int c[righe][colonne];
    int s[righe][colonne];
    //int p[righe][colonne];
    leggi(m);
    cout<<"\nInserisci i valori della seconda matrice separati da spazio\n"<<endl; 
    leggi(c);
                          
    cout<<"\nLa prima matrice digitante risulta\n\n\n";
    stampa(m);
    cout<<"\nLa seconda matrice digitante risulta\n\n\n";
    stampa(c);
    cout<<"\n\n";
    somma(m,c,s);
    cout<<"La matrice somma risulta\n\n";
    stampa(s);
    prodotto(m,c,s);
    cout<<"La matrice prodotto risulta\n\n";
    stampa(s);
    
    system("PAUSE");
    return 0;
    }
    
void leggi(int m[][3]){    
  for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
          cin>>m[i][j];
          }
  }
}
    
void stampa(int m[][3]){
         for(int i=0;i<3;i++){
                 for(int j=0;j<3;j++)
                         cout<<setw(4)<<m[i][j]<<" ";
                         cout<<endl;
        }
            }
void somma(int m[][3],int n[][3],int somma[][3]){
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
          somma[i][j]=m[i][j]+n[i][j];
         
          }
  }
}

void prodotto(int m[][3],int n[][3],int prodotto[][3]){
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++)
          prodotto[i][j]=m[i][j]*n[j][i];
         
          
  }
}
    
