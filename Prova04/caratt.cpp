/* Dato un carattere riconosce se �
    maiuscolo, minuscolo, numerico o altro
*/
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include <ctype.h>
//---------------------------------------------------------------------------
#pragma argsused

char c;

int main(int argc, char **argv)
{
// imput carattere da tastiera
        cout << "Inserisci un carattere alfabetico maiuscolo, minuscolo, o numerico :" <<endl;
        cin >> c;
// controlla se � numerico
        if (isdigit (c))
        cout <<"\n\tIl carattere inserito e' un numero";

// controlla se � alfabetico
else    if (isalpha(c)) {

// controlla se � maiuscolo o minuscolo
        if (islower(c))
        cout <<"\n\tIl carattere e' alfabetico minuscolo";
        else
        cout <<"\n\tIl carattere e' alfabetico maiuscolo";
}

// controlla se � "altro"
else    cout <<"\n\tIl carattere non e' contemplato";


// fine con return
        cout <<"\n\n\n\tPremere return per terminare";
        cin.ignore (4, '\n');
        cin.get();
}
