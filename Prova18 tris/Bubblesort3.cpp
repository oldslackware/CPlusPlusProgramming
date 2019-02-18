// Bubblesort3.cpp
// Realizzato da Marco Grandini.
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include "Funz_Vet.h"

//---------------------------------------------------------------------------
USEUNIT("Funz_Vet.cpp");
//---------------------------------------------------------------------------
#pragma argsused
char sino;    //se sino = 's' allora ripete il programma
const n=25;   //dimensione del vettore
int v[] = {7,14,90,34,41,26,19,83,99,38,45,81,69,67,51,2,37,3,57,60,82,
54,92,24,49};// vettore dati.
int main(int argc, char* argv[])
{
  cout << "Questo programma ordina un vettore dato mediante il metodo per "
  "scambio\ndiretto (bubblesort).\n";

  // Stampa il vettore come si presenta prima di essere ordinato.
  cout << "\nIl vettore da ordinare si presenta cosi':\n";
  stampa (v,n);

  // Ordina il vettore.
  ordina (v,n);

  // Stampa il vettore ordinato.
  cout << "\nIl vettore ordinato si presenta cosi':\n";
  stampa (v,n);

  cout << "\nBattere Return per terminare.";
  cin.get();

  return 0;
}

