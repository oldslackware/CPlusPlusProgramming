
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>


//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
const char str_a[]="Il giorno ", //  variabili vettore inizializzate in modo
str_b[]=" dell'anno 1997 cadeva di ";// costante e usate per il msg di output.
int giorno;     // Conterrà il giorno dell'anno.
int settim;     // Conterrà il giorno della settimana

//Enumerazione per creare il tipo settimana contenente i giorni della stessa.
enum settimana {Mercoledi,Giovedi,Venerdi,Sabato,Domenica,Lunedi,Martedi};
int main(int argc, char* argv[]) {

//Ciclo while per verificare che i dati in input stiano nel range definito.
  giorno =0;
  while (giorno < 1 || giorno > 365){
  cout << "Inserire il giorno dell'anno: ";
  cin  >> giorno;
  }
/* Dividendo per 7 il totale dei giorni dell'anno e prendendone il resto, si
 * ottiene un numero da 0 a 6, corrispondente ad un giorno della settimana. */
  settim =  (giorno % 7);

/* ciclo switch con cui si ricerca il giorno della settimana corrispondente al
 * relativo numero e lo si stampa a video (utilizzando anche le stringhe
 * str_a e str_b)*/
  switch(settim){
  case Lunedi:
  cout << str_a << giorno << str_b << "Lunedi";
  break;
  case Martedi:
  cout << str_a << giorno << str_b << "Martedi";
  break;
  case Mercoledi:
  cout << str_a << giorno << str_b << "Mercoledi";
  break;
  case Giovedi:
  cout << str_a << giorno << str_b << "Giovedi";
  break;
  case Venerdi:
  cout << str_a << giorno << str_b << "Venerdi";
  break;
  case Sabato:
  cout << str_a << giorno << str_b << "Sabato";
  break;
  case Domenica:
  cout << str_a << giorno << str_b << "Domenica";
  break;
  }
  Attesa();
  return 0;
}
void Attesa(void)
{cout << endl << endl <<"\tReturn per terminare";
  cin.ignore(4,'\n');
  cin.get();
}

