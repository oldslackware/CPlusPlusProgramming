#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

const int size=10;
int n[size];
for(int i=0;i<size;i++){
        cout<<"Inserisci l'elemento "<<i+1<<"\n";
        cin>>n[i];
}
for(int j=0;j<size;j++){
        cout<<n[j]<<"  ";
        if(j==(size-1)){
                    cout<<"\n";
        }
        }
        
        
      //  system("PAUSE");
        return 0;
        }
