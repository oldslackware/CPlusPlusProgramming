// Palindromo.cpp
// Autore: Marco Grandini.
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include "FunzPal.h"
//---------------------------------------------------------------------------
USEUNIT("FunzPal.cpp");
//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
char sino;              //se sino = 's' allora ripete il programma
long int n;
int main(int argc, char* argv[]){
  do{
    cout << "Dato un numero in input il programma verifica "
    "se il suo quadrato e' palindromo.\n\n";
    do {
      cout << "Inserire il numero (-65535 <= n <= 65535): ";
      cin >> n;
    }
    while (n < -65535 || n > 65535);
  quadpal(n);
  cout << "\nSi vuole proseguire(S/ )? ";
  sino='n';
  cin >> sino;
  }
  while (sino=='s'||sino=='S');
  return 0;
}

