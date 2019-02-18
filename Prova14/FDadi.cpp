// FDadi.cpp
//---------------------------------------------------------------------------
#pragma hdrstop
#include <stdlib.h>
#include <iostream.h>
#include <time.h>
#include <conio.h>
#include "FDadi.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

void stampa (int,int,int);
// ********************************
// * Funzione richiamata dal main *
// ********************************
bool gioca(){
  int dado1,dado2,somma,punteggio;
  bool primolancio = true;

  // cicli di lancio (eseguiti teoricamente all'infinito)
  do{
    // effettua il lancio
    cout << "\n\t\tReturn per lanciare i dadi";
    cin.get();
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    somma = dado1 + dado2;
    stampa(dado1,dado2,somma);

    // esegue i controlli relativi al primo lancio
    if (primolancio){
      switch (somma){
        case 7:
          case 11:
            return (true);
        case 2:
          case 3:
            case 12:
            return (false);
        default:
          punteggio = somma;
          break;
      }
    primolancio = false;
    }

      // esegue i controlli relativi ai lanci successivi
      else{
        if (punteggio==somma)
          return (true);
          else
            if (somma==7)
              return (false);
              else
                cout << "\t\tPunteggio da raggiungere: " << punteggio << "\n";
      }
  }
  while (!primolancio);
  return false;
}

// ****************************************
// * Funzione di stampa del dado estratto *
// ****************************************
void stampa(int dado1, int dado2, int somma){
  clrscr();
  // stampa la prima riga
  cout << "\n\t\t+-----+\t\t+-----+\n";

  // stampa la seconda riga (dado1)
  if (dado1==2||dado1==3)
    cout << "\t\t|O    |\t\t";
    else
      if (dado1==4||dado1==5||dado1==6)
        cout << "\t\t|O   O|\t\t";
        else
          cout << "\t\t|     |\t\t";
  // stampa la seconda riga (dado2)
  if (dado2==2||dado2==3)
    cout << "|O    |\n";
    else
      if (dado2==4||dado2==5||dado2==6)
        cout << "|O   O|\n";
        else
          cout << "|     |\n";
  // stampa la terza riga (dado1)
  if (dado1==1||dado1==3||dado1==5)
    cout << "\t\t|  O  |\t\t";
    else
      if (dado1==6)
        cout << "\t\t|O   O|\t\t";
        else
          cout << "\t\t|     |\t\t";
  // stampa la terza riga (dado2)
  if (dado2==1||dado2==3||dado2==5)
    cout << "|  O  |\n";
    else
      if (dado2==6)
        cout << "|O   O|\n";
        else
          cout << "|     |\n";
  // stampa la quarta riga (dado1)
  if (dado1==2||dado1==3)
    cout << "\t\t|    O|\t\t";
    else
      if (dado1==4||dado1==5||dado1==6)
        cout << "\t\t|O   O|\t\t";
        else
          cout << "\t\t|     |\t\t";
  // stampa la quarta riga (dado2)
  if (dado2==2||dado2==3)
    cout << "|    O|\n";
    else
      if (dado2==4||dado2==5||dado2==6)
        cout << "|O   O|\n";
        else
          cout << "|     |\n";
  // stampa la quinta riga
  cout << "\t\t+-----+\t\t+-----+\n";
  // Stampa i valori dei singoli dadi e il totale
  cout << "\n\t\tPunteggio effettuato: " << somma << "\n";
}

