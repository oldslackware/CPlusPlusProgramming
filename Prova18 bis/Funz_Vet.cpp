// Funz_Vet.cpp
// Realizzato da Marco Grandini.
//---------------------------------------------------------------------------
#pragma hdrstop
#include "Funz_Vet.h"
#include <iostream.h>
#include <iomanip.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
void ordina (int v[], int n)
{
  int i, j, // indici
      x,    // appoggio per scambio (metodo dei tre bicchieri)
      cont=0; // cicli interni necessari a ordinare il vettore
  bool scambi; //verifica se ci sono stati scambi
  // ciclo che sposta l'indice i da inizio a fine vett.
  for (i=1, scambi=true; i<n&&scambi; i++)
  {
    cont++;
    //ciclo interno che sposta l'indice j da fine vettore a i
    scambi= false;
    for (j=n; j>=i;j--)
    {
      /* confronta il numero precedente a quello indicato da j con quest'ultimo
         e se maggiore li scambia.*/
      if (v[j-1]>v[j])
      {
        x= v[j]; v[j]=v[j-1]; v[j-1]=x; scambi= true; // scambio (tre bicchieri)
      }

    }
  }
  cout<<"\nPer ordinare il vettore sono state eseguite "<<cont<< " scansioni\n";
}
void stampa(const int v[], int n){
char riga[] = "+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
"--+--+--+--+\n";
    cout << riga << "|";
    for(int i=0;i<n;i++)
      cout << setw(2) << v[i]  <<  "|";
      cout << endl << riga;
}

