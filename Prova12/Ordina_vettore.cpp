
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include <iomanip.h>

//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
void Stampa(void);
void Ordina(int v[],const int n);
char sino;    //se sino = 's' allora ripete il programma
const n=25;   //dimensione del vettore
int vettore[] = {7,14,90,34,41,26,19,83,99,38,45,81,69,67,51,2,37,3,57,60,82,
54,92,24,49},
    i,        //incrementa nei cicli for.
    k,
    j,
    x;

int main(int argc, char* argv[]){
  cout << "Questo programma ordina i dati contenuti in un vettore.";
  do{
    cout << "\n\nQuesto e' il vettore da ordinare:\n";
    Stampa();
    Ordina(vettore, n);
    cout << "\n\nQuesto e' il vettore ordinato:\n";
    Stampa();
    cout << "\nSi vuole proseguire(S/ )? ";
    sino='n';
    cin >> sino;
  }
  while (sino=='s'||sino=='S');
  Attesa();
  return 0;
}
void Attesa(void){
  cout << endl << endl <<"\tReturn per terminare";
  cin.ignore(4,'\n');
  cin.get();
}
void Stampa(void){
cout << "+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
        "--+--+--+--+\n|";
for(i=0;i<n;i++)
  cout << setw(2) << vettore[i]  <<  "|";
  cout << "\n+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
          "--+--+--+--+";
}
void Ordina(int v[], const int n)
{
  int x;
  for (int i=0; i<(n-1); i++)
  {
    int k=i;
    for (int j=i+1; j<n; j++)  // cerca il valore minimo
      if (v[j]< v[k]) k=j;
    x=v[k]; v[k]=v[i]; v[i]=x; // scambia i valori
  }
}

