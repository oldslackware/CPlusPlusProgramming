
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include <iomanip.h>

//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
char sino;    //se sino = 's' allora ripete il programma
const n=25;   //dimensione del vettore
int vettore[] = {2,3,7,14,19,24,26,34,37,38,41,45,49,51,54,57,60,67,69,81,82,83,
                 90,92,99},
    i,        //incrementa nei cicli for.
    cicli,    //indica quanti cicli sono stati necessari a testare il vettore
    find,     //il numero da trovare nel vettore.
    leftt,    //puntatore di sinistra
    middle,   //puntatore centrale
    rightt,   //puntatore di destra
    found;    //condizione logica risultato della ricerca
int main(int argc, char* argv[]){
  cout << "Questo programma presenta un vettore di " << n << " numeri,\n"
          "dopodiche'chiede all'utente un numero in input.\n"
          "Analizzato il vettore con metodo di ricerca binaia,\n"
          " dira'se il numero in input e'compreso nel vettore\n\n";
  do{
    cout << "Il vettore e' cosi' composto:\n";
    cout << "\n+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
            "--+--+--+--+\n|";
    for(i=0;i<n;i++)
      cout << setw(2) << vettore[i]  <<  "|";
    cout << "\n+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+"
            "--+--+--+--+";
    cout << "\n\nInserire il numero: ";
    cin >> find;
    leftt=0;    //assegna a leftt e a rightt gli estremi del vettore.
    rightt=n-1;
    cicli=0;
    /* inizia un ciclo ripetuto finche' il valore di leftt non supera
       il valore di rightt */
    while(leftt <= rightt){
      cicli++; //incrementa ad ogni ciclo while
      /*trova middle come valore medio tra i due estremi*/
      middle = (leftt + rightt)/2;
      /* verifica se il numero si trova a sinistra */
      if(find < vettore[middle])
        /* se si right assume il valore precedente a quello testato */
        rightt = middle - 1;
          /* altrimenti */
          else{
            /* se nel vettore c'e' il valore cercato forza leftt > rightt */
            if(find == vettore[middle])
              leftt= rightt + 1;
                /* altrimenti leftt assume il valore succ. a quello testato */
                else
                  leftt = middle + 1;
          }
    }
    /* La ricerca e' conclusa, o perche' il numero in input e' stato trovato
    nel vettore, o perche' leftt > rightt. Pertanto bisogna testare
    se il vettore alla coordinata middle contiene il valore di input e caricare
    la condizione logica in found */
    found = (vettore[middle]==find);
    if(found)
      cout << "\nIl numero " << find << " si trova nel vettore\n";
        else
          cout << "\nIl numero " << find << " non si trova nel vettore\n";
    cout << "Questa operazione ha richiesto " << cicli << " cicli while.";
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

