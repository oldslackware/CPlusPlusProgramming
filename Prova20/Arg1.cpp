/* ARG1.CPP Illustra le variabili usate per accedere
 * agli argomenti di un comando 
 *      argc            argv
 */
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>

//---------------------------------------------------------------------------
#pragma argsused
void Attesa(char *);
int main(int argc, char* argv[]) {
  int count;
  /* Visualizza gli argomenti del comando */
  cout << endl << "Argomenti del comando:" << endl;
  for( count = 0; argv[1][count]!='\0'; count++ )
     cout << "  argv[1][" << count << "]   " << argv[1][count] << endl;
  for( count = 0; argv[2][count]!='\0'; count++ )
     cout << "  argv[2][" << count << "]   " << argv[2][count] << endl;

  Attesa("terminare");
  return 0;
}
void Attesa(char * str) {
  cout << "\n\n\tPremere return per " << str;
  cin.get();
}