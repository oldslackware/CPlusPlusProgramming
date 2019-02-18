// MDadi.cpp
#pragma hdrstop
#include <condefs.h>
#include "FDadi.h"
#include <iostream.h>

//---------------------------------------------------------------------------
USEUNIT("FDadi.cpp");
//---------------------------------------------------------------------------
#pragma argsused

char sino;              //se sino = 's' allora ripete il programma
int main(int argc, char* argv[])
{
do{
  time_t t;
  srand((unsigned) time(&t));
  bool vincita = gioca();
    cout << "\n\n\t\t*************************\n";
  if (vincita)
    cout <<  "\t\t****    HAI VINTO    ****\n";
    else
      cout <<  "\t\t****    HAI PERSO    ****\n";
  cout << "\t\t*************************\n";
cout << "\nSi vuole proseguire(S/ )? ";
cin >> sino;
}
while (sino=='s'||sino=='S');
    return 0;
}

