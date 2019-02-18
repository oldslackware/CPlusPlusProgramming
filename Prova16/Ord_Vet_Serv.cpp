// Ord_Vet_Serv.cpp
// Realizzato da Marco Grandini.
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include <iomanip.h>
#include "Funz_Vet.h"

//---------------------------------------------------------------------------
USEUNIT("Funz_Vet.cpp");
//---------------------------------------------------------------------------
#pragma argsused
char sino;    //se sino = 's' allora ripete il programma
char riga[] = "+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
"--+--+--+--+\n";
const n=25;   //dimensione dei vettori
int v[] = {7,14,90,34,41,26,19,83,99,38,45,81,69,67,51,2,37,3,57,60,82,
54,92,24,49},// vettore dati.
s[n];        // vettore di servizio.
int main(int argc, char* argv[])
{
  cout << "Questo programma crea in un vettore di servizio la sequenza"
  " necessaria\na stampare in ordine crescente i numeri contenuti nel vettore"
  " dati,\nsenza alterare quest'ultimo.\n";
  do
  {

    // chiama la funzione ordina.
    ordina (v,s,n);

    // stampa del vettore dati.

    cout << "\n\nQuesto e' il vettore dati:\n";
    cout << riga << "|";
    for(int i=0;i<n;i++)
      cout << setw(2) << v[i]  <<  "|";
      cout << endl << riga;

    // stampa il vettore di servizio.

    cout << "\n\nQuesto e' il vettore di servizio:\n";
    cout << riga << "|";
    for(int i=0;i<n;i++)
      cout << setw(2) << s[i]  <<  "|";
      cout << endl << riga;

    // stampa il vettore dati ordinato mediante il vettore di servizio.

    cout << "\n\nQuesto e' il vettore dati ordinato mediante il vettore di "
    "servizio:\n";
    cout << riga << "|";
    for(int i=0;i<n;i++)
      cout << setw(2) << v[s[i]]  <<  "|";
      cout << endl << riga;



    cout << "\nSi vuole proseguire(S/ )? ";
    sino='n';
    cin >> sino;
  }
  while (sino=='s'||sino=='S');
  return 0;
}

