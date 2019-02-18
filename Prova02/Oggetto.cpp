/* Oggetto.cpp
 * Trasforma una frazione in un numero decimale
 */

#pragma hdrstop
#include <condefs.h>
#include <iostream.h>

//---------------------------------------------------------------------------
#pragma argsused
int main() {
   float raggio, circon, area;

   cout << "Dato il raggio calcola l'area e la circonferenza di un cerchio" << endl
        << "Raggio:   ";
   cin  >> raggio;

   area = raggio * raggio * 3.14;
   circon = raggio * 6.28;

   cout << raggio << " * " << raggio << " * 3,14 = " << area << endl;
   cout << raggio << " * 6,28 = " << circon << endl;


  cout << "\n\n\tPremere return per terminare";
  cin.ignore(4, '\n');
  cin.get();
}

