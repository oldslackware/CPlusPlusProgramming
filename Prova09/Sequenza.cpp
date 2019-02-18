/*Questo programma chiede in input i valori di m e di n, dopodiche' crea
una successione di numeri da a_di_1 ad a_di_n dove a_di_1 = 3, a_di_2 =4
e i successivi valori sono regolati dalla seguente funzione:
a_di_(i+1) = 2 * a_di_i - a_di_(i-1) + 1   */
#pragma hdrstop
#include <condefs.h>
#include <iostream.h>
char sino;              //se sino = 's' allora ripete il programma
long unsigned a1,a2,a3; //a1=a di i-1, a2=a di i a3=a di i+1
int m,n,                //m e n sono i due numeri in input
i;                      //i e' il numero che si incrementa nel ciclo for
//---------------------------------------------------------------------------
#pragma argsused
void Attesa(void);
int main(int argc, char* argv[])
{
do{
//chiede il valore di m e verifica che sia maggiore di 3
do{
cout << "Inserire m:(maggiore di 3)";
cin >> m;
}
while (m<=3);
//chiede il valore di n e verifica che sia maggiore di m

do{
cout << "Inserire n:(maggiore di "<< m <<")";
cin >> n;
}
while (n<=m);

a1=3;
a2=4;
for (i=3;i<=n;i++)
{
a3=2*a2-a1+1;
cout <<"a1="<<a1<<" a2="<<a2<<" a3="<<a3<<"\n";
a1=a2;
a2=a3;
}
cout <<"a1="<<a1<<" a2="<<a2<<" a3="<<a3<<"\n";
a2=a3-a1;
cout<<"il risultato e' "<<a2;

cout << "\nSi vuole proseguire(s/any key)? ";
sino='n';
cin >> sino;
}
while (sino=='s'||sino=='S');
Attesa();
        return 0;
}
void Attesa(void)
{cout << endl << endl <<"\tReturn per terminare";
  cin.ignore(4,'\n');
  cin.get();
}

