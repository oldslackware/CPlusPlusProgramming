#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    char c;
    int i=32;
  cout<<"\n\n";
    while(i<=127){
    c=i;

                            
    cout<<i<<"="<<c<<"\t";
  
    
    if(i%10==0){
    cout<<endl;
    }
    i++;
    }
    cout<<"\n\n";
//    system("PAUSE");
    return 0;
    }
