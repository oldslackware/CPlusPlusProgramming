// fusione.cpp
// Realizzato da Marco Grandini.
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include "Funz_fus.h"

//---------------------------------------------------------------------------
USEUNIT("Funz_fus.cpp");
//---------------------------------------------------------------------------
#pragma argsused
char sino;    //se sino = 's' allora ripete il programma
const nu=10,   // dimensione del vettore u
      nv=15;   // dimensione del vettore v
int u[] = {14,24,26,34,45,54,57,67,69,83},// primo vettore dati.
    v[] = {2,3,7,19,37,38,41,49,51,60,81,82,90,92,99},// secondo vettore dati.
    z[nu+nv]; // vettore di fusione
int main(int argc, char* argv[])
{
  cout << "Questo programma fonde due vettori dati (ordinati) in un terzo\n"
          "vettore (ordinato).\n";

  // Stampa il vettore u.
  cout << "\nIl primo vettore dati (ordinato) si presenta cosi':\n";
  stampa (u,nu);

  // Stampa il vettore v.
  cout << "\nIl secondo vettore dati (ordinato) si presenta cosi':\n";
  stampa (v,nv);


  // Fonde i vettori.
  fusione (u, nu, v, nv, z);

  // Stampa il vettore z.
  cout << "\nLa fusione dei due vettori si presenta cosi':\n";
  stampa (z,nu+nv);

  cout << "\nBattere Return per terminare.";
  cin.get();

  return 0;
}

