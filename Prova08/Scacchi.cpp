
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>


//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
int x1,x2,y1,y2;  // sono le coordinate delle caselle 1 e 2
int col1,col2;    /* sono i colori assunti dalle caselle
                     (0=falso=nero, 1=vero=bianco)*/
int main(int argc, char* argv[])
{
cout << "Questo programma riceve in input due coppie di numeri,\n"
        "ognuna delle quali identifica le coordinate di una scacchiera.\n"
        "Come output il programma dira' se le due caselle sono dello stesso"
        " colore.\n\n";

/*richiede l'inserimento delle coordinate X Y della prima casella.*/
do{
cout << "Inserire X1:";
cin >> x1;
}
while (x1<1||x1>8);

do{
cout << "Inserire Y1:";
cin >> y1;
}
while (y1<1||y1>8);
/* verifica se la somma delle coordinate e' pari=falso=nero
   oppure dispari=vero=bianco*/
col1 = (x1 + y1)%2;

if(col1 == 1)
cout << "la prima casella e' bianca.";
else
cout << "la prima casella e' nera.";
cout << "\n\n";

/*richiede l'inserimento delle coordinate X Y della seconda casella.*/
do{
cout << "Inserire X2:";
cin >> x2;
}
while (x2<1||x2>8);

do{
cout << "Inserire Y2:";
cin >> y2;
}
while (y2<1||y2>8);

/* verifica se la somma delle coordinate e' pari=falso=nero
   oppure dispari=vero=bianco*/
col2 = (x2 + y2)%2;

if(col2 == 1)
cout << "la seconda casella e' bianca.";
else
cout << "la seconda casella e' nera.";
cout <<"\n\n";

//confronta col1 e col2, e stampa se sono uguali o differenti.

if((col1==0 && col2==0)||(col1==1 && col2==1))
cout << "le due caselle sono dello stesso colore.\n\n";
else
cout << "le due caselle sono di colori differenti.\n\n";

Attesa();
        return 0;
}
void Attesa(void)
{cout << endl << endl <<"\tReturn per terminare";
  cin.ignore(4,'\n');
  cin.get();
}

