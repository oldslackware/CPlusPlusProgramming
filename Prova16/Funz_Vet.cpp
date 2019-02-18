// Funz_Vet.cpp
// Realizzato da Marco Grandini.
//---------------------------------------------------------------------------
#pragma hdrstop
#include "Funz_Vet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void ordina (const int v[],int s[], int n)
{
  int x; // variabile d'appoggio.
  // inizializza il vett. s con indici crescenti da 0 a n
  for (int i=0; i<n; i++) s[i]=i;
  for (int i=0; i<(n-1); i++)
  {
    int k=i;
    for (int j=i+1; j<n; j++) // cerca il valore minimo.
      if (v[s[j]]<v[s[k]]) k=j;
    x=s[k]; s[k]=s[i]; s[i]=x; // scambia i rel. indici nel vett. di servizio
  }

}

