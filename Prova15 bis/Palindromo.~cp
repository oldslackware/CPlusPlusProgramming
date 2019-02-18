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
    int continua = 1;
    cout << "Genera un elenco di numeri il cui quadrato e' palindromo\n\n";
    for (n=0;n<=65535;n++){
      if (quadpal(n)){
        cout << "\t" << n << "\t" << n * n << "\n";
        continua++;
      }
      if (continua>20){
        cout << "\n\tReturn per continuare\n";
        cin.ignore(4,'\n');
        cin.get();
        continua=1;
      }
    }
      cout << "\nSi vuole proseguire(S/ )? ";
      cin >> sino;
  }
  while (sino=='s'||sino=='S');
  return 0;
}

