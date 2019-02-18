// FunzPal.cpp
// Autore: Marco Grandini.
//---------------------------------------------------------------------------
#pragma hdrstop
#include <iostream.h>
#include "FunzPal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
int scomponi (int *, unsigned long);
int vet[10]; // vett. contenente la scomposiz. delle cifre componenti il numero.


/***********************************************************************
 **** verifica se il quadrato del numero assegnatole e' palindromo. ****
 ***********************************************************************/
void quadpal (long int n){
  unsigned long n2 = n * n;
  bool palin = true; // e' vero se il numero e' palindromo
  int indiceSX, indiceDX; // indici sinistro e destro
  /* stampa i dati in input e in seguito stampera' sulla stessa riga
     il risultato del controllo */
  cout << "Il quadrato di " << n << " e' " << n2;
  indiceDX = scomponi(vet,n2); // numero di cifre -1 componenti il numero
  for (indiceSX=0; (indiceDX>=indiceSX) && palin; indiceSX++){
    palin = (vet[indiceSX] == vet[indiceDX]);
    indiceDX--;
  }
  if (palin)
    cout << " ed e' palindromo";
    else
      cout << " e non e' palindromo";
  return;
}


/**********************************************************
 **** scompone le singole cifre del numero assegnatole ****
 **** all'interno del vettore                          ****
 **********************************************************/
int scomponi (int vet[], unsigned long n2){
  int cifre; // contiene il num. di cifre di cui e' composto il numero
  for (cifre=0;n2>0; cifre++){
    vet[cifre] = n2 %10; // ad ogni ciclo ass. a vet[cifre] il val. della cifra
    n2/=10; // elimina un decimale
  }
return (cifre-1); // restit. il num. di cifre-1 di cui e' composto il numero
}

