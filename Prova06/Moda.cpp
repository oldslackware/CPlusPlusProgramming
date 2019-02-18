
#pragma hdrstop
#include <condefs.h>
#include <stdlib.h>
#include <iostream.h>
#include <time.h>
//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
const int N = 100;
int a,i,m;
int vet [N];
int unonove [9];

int main(int argc, char* argv[]) {
   time_t t;
   srand((unsigned) time(&t));
   for (int i = 0; i < N; i++) {
     vet[i] = rand() % 9 + 1;
     if((i % 10) == 0)
       cout << endl;
     else
       cout << "\t";
     cout << vet[i];
     }
     for (a=0;a<9;a++){ // inizializza il vettore unonove
          unonove [a]=0;
          }
     for (i=0;i<N;i++){         // in questo ciclo si leggono i valori
         unonove [vet[i]-1]++;  // contenuti nel vettore vet e a seconda
         }                      // del valore rilevato si incrementa la
                                // corrispondente cella nel vettore unonove
     cout<<"\n\n";

     for (i=0;i<9;i++){         // si leggono i valori contenuti nel vettore
                                // unonove e li si stampa a video.
     cout<<"Q.ta' di numeri "<<(i+1)<<" = "<<unonove [i]<<"\n";
     }
     m=1;
     for (i=0;i<9;i++){         // si cerca il valore piu' alto (moda)
                                // contenuto nel vettore unonove
     if (unonove [i]>m)
     m=unonove[i];
     }
/* si confronta m con il vettore unonove e dove c'e' corrispondenza di
   valore, tale numero e' di moda, altrimenti non lo e' */
     cout<<"\n";
     for (i=0;i<9;i++){
     if (unonove [i]==m)
     cout<<"Il numero "<<(i+1)<<" e'di moda\n";
     else
     cout<<"Il numero "<<(i+1)<<" non e'di moda\n";
     }
   Attesa();
   return 0;
}
void Attesa(void) {
  cout << endl << endl <<"\tReturn per terminare";
  cin.get();
}
