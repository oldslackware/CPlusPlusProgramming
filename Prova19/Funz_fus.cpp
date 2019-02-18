#include <iostream.h>
#include <iomanip.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
void fusione (int u[], int nu, int v[], int nv, int z[])
{
  int i,j,k; // indici
  // Ciclo for esterno che cerca nei due vettori i valori da inserire nel terzo.
  for (i=0, j=0, k=0; i<nu && j<nv; k++){
    // se il valore piu'basso o uguale si trova in u[i] viene copiato in z[k]
    if (u[i]<=v[j]){
      z[k]=u[i++];
    }
    // altrimenti v[j] viene copiato in z[k]
    else{
      z[k]=v[j++];
    }
  }
  // se il vettore u[] ha degli elementi rimanenti,vengono copiati in z[]
  while(i<nu)
  z[k++]=u[i++];

  // se il vettore v[] ha degli elementi rimanenti,vengono copiati in z[]
  while(j<nv)
  z[k++]=v[j++];

}
void stampa(const int v[], int n){
char riga[] = "--+";
int i; // contatore per cicli for
    cout << "+";
    for (i=0; i<n;i++) cout << riga;
    cout << "\n|";
    for(i=0;i<n;i++) cout << setw(2) << v[i]  <<  "|";
    cout << "\n+";
    for (i=0; i<n;i++) cout << riga;
    cout << "\n";
    cout << endl;
}

