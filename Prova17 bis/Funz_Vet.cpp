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
  int x, // variabile d'appoggio.
      i, j; // indici
  // ciclo che sposta l'indice i da inizio a fine vett.
  for (i=2; i<n; i++)
  {
    x=v[i];// carica nella variabile d' appoggio il numero da inserire.

    // ciclo che sposta verso sinistra l'indice j da i-1 al valore infer. di x.
    for (j=i-1; x<v[j]&&j>=0; j--)
      v[j+1]=v[j];//copia il valore puntato da j nella casella alla sua destra.
    //copia la var. d'appoggio nella casella alla destra del val. puntato da j.
    v[j+1]=x;
  }

}
void stampa(const int v[], int n){
char riga[] = "+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
"--+--+--+--+\n";
    cout << riga << "|";
    for(int i=0;i<n;i++)
      cout << setw(2) << v[i]  <<  "|";
      cout << endl << riga;
}

