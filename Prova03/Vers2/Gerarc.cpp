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
#define v1 cout << ((char) 195)
#define v2 cout << ((char) 179)
#define v3 cout << ((char) 192)
#define b1 cout << ((char) 196)
#define b0 cout << " "
#define c0 for(j=0; j<6; j++) b0
#define c1 for(j=0; j<3; j++) b1
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
char scar[25];
void Indent(int, int);
void Stampa(int, int);
void Attesa(char *);
int main(int argc, char* argv[]) {
  int i;
  for(i = 0; i < MAX; i++) {
      vet[i].ns = -1;
      vet[i].ls  = NULL;
  }
  v1 << "  v1  "; v2 << "  v2  "; v3 << "  v3  "; b1 << "  b1" << endl << endl;
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
  if(vet[0].ls != NULL)
     if(vet[0].ls->next != NULL)
	scar[0] = (char) 195;
     else
	scar[0] = (char) 192;
  Stampa(0, 0);
  Attesa("terminare");
  return 0;
}
void Stampa(int indice, int livello) {
  list *p;
  Indent(indice, livello);
  p = vet[indice].ls;
  while(p != NULL) {
     if(p->next != NULL)
	scar[livello] = (char) 195;
     else
	scar[livello] = (char) 192;
     Stampa(p->n, livello+1);
     p = p->next;
  }
}
void Indent(int indice, int livello) {
  int i, j;
  if(livello != 0) {
     b0;b0;
     for(i = 0; i < (livello-1); i++) {
	if(scar[i] == (char) 195)
	   v2;
	else
	   b0;
	c0;
     }
     cout << scar[livello-1];
     c1;
  }
  cout << " " << vet[indice].cognome << endl;
}
void Attesa(char * str) {
  cout << "\n\n\tPremere return per " << str;
  cin.get();
}