
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>


//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
char sino; //se sino = 's' allora ripete il programma
int i,     //contatore per i cicli for
    num1,num2,//i due numeri inseriti dall'utente.
    indirizzo1,indirizzo2,//indica l'indirizzo in cui si trova il numero nel vettore
    vettore[]={1,8,95,10,7,11,4,6,12,54,91,19};
const int n=11; //corrisponde al numero di celle del vettore
int main(int argc, char* argv[])
{
cout << "Questo programma inizializza un vettore di "<<n+1<<" numeri, non ordinati\n"
        "e non ripetuti. All'utente vengono richiesti in input due numeri.\n"
        "Se uno o entrambi i numeri si trovano nel vettore,\n"
        "esso verra' spezzato in due o tre parti. Altrimenti rimarra' intero.\n";
// Inizio del ciclo do-while che ripete il programma fino a quando l'utente
// conferma di voler uscire.
do{
   cout << "\nIl vettore e' costituito dai seguenti numeri:\n\n";
   for(i=0;i<=n;i++)
   cout << vettore[i]<<" ";
   cout << "\n\nInserire il primo numero: ";
   cin >> num1;
   cout << "Inserire il secondo numero: ";
   cin >> num2;
   //controlla se nel vettore ci sono i numeri inseriti dall'utente e se si
   //carica nelle variabili indirizzo1 e indirizzo2 i relativi indirizzi
   indirizzo1=0; indirizzo2=0;
   for(i=0;i<=n;i++){
      if (vettore[i]==num1)
      indirizzo1=i;
      else if (vettore[i]==num2)
      indirizzo2=i;
   }
   if (indirizzo1 && indirizzo2)
      if (indirizzo1>indirizzo2)
        cout << "Prima delle tre parti del vettore\n";
        for(i=0;i<=indirizzo1;i++)
        cout << vettore[i]<<" ";
        cout << "Seconda delle tre parti del vettore\n";
        for(i=0;i<=indirizzo1;i++)
        cout << vettore[i]<<" ";


cout << "\n\tSi vuole proseguire(S/ )? ";
sino='n';
cin >> sino;
}
while (sino=='s'||sino=='S');
Attesa();
        return 0;
}
void Attesa(void)
{cout << endl << endl <<"\tReturn per terminare";
  cin.ignore(4,'\n');
  cin.get();
}

