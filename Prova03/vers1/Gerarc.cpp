/* Gerarc.cpp
 */
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
#include <fstream.h>
#include <string.h>
//---------------------------------------------------------------------------
#pragma argsused
#define nomef "dipend.txt"
const int MAX = 100;
struct list {
  int n;
  list *next;
};
struct dip {
  char cognome[25];
  char nome[25];
  int ns;
  list *ls;
};
dip vet[MAX];
dip buf;
list *tmp;
int nd;
void Stampa(int, int);
void Attesa(char *);
int main(int argc, char* argv[]) {
  int i;
  for(i = 0; i < MAX; i++) {
      vet[i].ns = -1;
      vet[i].ls  = NULL;
  }
  ifstream in(nomef);
  if(!in) {
    cout << "Errore apertura " << nomef;
    Attesa("terminare");
    exit(0);
  }
  while(!in.eof()) {
    in >> buf.cognome >> buf.nome >> nd >> buf.ns;
    strcpy(vet[nd].cognome, buf.cognome);
    strcpy(vet[nd].nome, buf.nome);
    vet[nd].ns = buf.ns;
    if(nd != 0) {
       tmp = new list;
       tmp->n = nd;
       tmp->next = vet[buf.ns].ls;
       vet[buf.ns].ls = tmp;
    }
  }
  Stampa(0, 0);
  Attesa("terminare");
  return 0;
}
void Stampa(int indice, int livello) {
  int i;
  list *p;
  for(i = 0; i < livello; i++)
    cout << "    ";
  cout << vet[indice].cognome << endl;
  p = vet[indice].ls;
  while(p != NULL) {
     Stampa(p->n, livello + 1);
     p = p->next;
  }
}
void Attesa(char * str) {
  cout << "\n\n\tPremere return per " << str;
  cin.get();
}