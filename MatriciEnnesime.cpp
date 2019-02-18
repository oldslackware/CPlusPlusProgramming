#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>
using std::setw;

void leggi(int **mat, int size){
  for(int i=0; i<size; i++){
          cout<<"Inserisci riga "<<i+1<<endl;
    for(int j=0; j<size; j++)
    cin >> mat[i][j];
    cout << endl;
    }
    cout << endl;
}

void stampa(int **mat,int size){
         for(int i=0;i<size;i++){
                 for(int j=0;j<size;j++)
                         cout<<setw(4)<<mat[i][j]<<" ";
                         cout<<endl;
        }
            }
void somma(int **mat,int **mat2,int **mat3,int size){
     for(int i=0;i<size;i++){
          for(int j=0;j<size;j++)
          mat3[i][j]=mat[i][j]+mat2[i][j];
         
          }
  }

void prodotto(int **mat,int **mat2,int **mat4,int size){
     for(int i=0;i<size;i++){
             for(int j=0;j<size;j++)
             mat4[i][j]=0;
       }
     for(int i=0;i<size;i++){
             for(int j=0;j<size;j++)
             for(int p=0;p<size;p++)
             mat4[i][j]=mat4[i][j]+mat[i][p]*mat2[p][j];   
                }
  }       
  

           

int main(){
int dim;
int **mat;
int **mat2;
int **mat3;
int **mat4;

cout << "\n\nDefinire la dimensione delle matrici NxN :";
cin >> dim;
cout << endl;
cout<<"Inserisci la prima matrice "<<endl;

mat = new int*[dim]; 
for(int i=0; i<dim; i++) 
mat[i] = new int[dim];
leggi(mat,dim);

cout<<"Inserisci la seconda matrice "<<endl;

mat2=new int*[dim];
for(int i=0;i<dim;i++)
mat2[i]=new int[dim];

leggi(mat2,dim);

mat3=new int*[dim];
for(int i=0;i<dim;i++)
mat3[i]=new int [dim];

somma(mat,mat2,mat3,dim);

mat4=new int*[dim];
for(int i=0;i<dim;i++)
mat4[i]=new int [dim];

cout<<"\nLa prima matrice digitata risulta "<<endl;
stampa(mat,dim);

cout<<"\nLa seconda matrice risulta "<<endl;
stampa(mat2,dim);

cout<<"\nLa matrice somma risulta "<<endl;
stampa(mat3,dim);

prodotto(mat,mat2,mat4,dim);
cout<<"\nLa matrice prodotto risulta "<<endl;
stampa(mat4,dim);
cout<<"\n\n"<<endl;
for(int i=0; i<dim; i++){ 
delete [] mat[i];
delete [] mat;

delete [] mat2[i];
delete [] mat2;

delete[] mat3[i];
delete []mat3;

delete [] mat4[i];
delete [] mat4;
}
//system("PAUSE");
return 0;
}



