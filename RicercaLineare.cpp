#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int ricercaLineare(int[],int,int);
int main(){
    int size;
    cout<<"Inserisci quanti elementi vuoi inserire"<<endl;
    cin>>size;
    int v[size];
    for(int i=0;i<size;i++){
            cout<<"Inserisci l'elemento "<<i+1<<endl;
            cin>>v[i];
    }
    int trova;
    cout<<"\nInserisci elemento da ricercare"<<endl;
    cin>>trova;
    
    int cerca=ricercaLineare(v,trova,size);
    //se non lo trovo
    if(cerca!=-1)
    cout<<"\nElemento trovato in posizione "<<trova<<endl;
    else
    cout<<"\nElemento non trovato"<<endl;
                      
                       
   // system("PAUSE");
    return 0;
    }
                       
 int ricercaLineare( int a[],int search,int s){
     for(int i=0;i<s;i++){
             if(a[i]==search)
                   return i;
             }
             return -1;
             }               
