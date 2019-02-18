#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
#include<cstdlib>
int main(){
    int frequenza1=0;
 int frequenza2=0;
 int frequenza3=0;
 int frequenza4=0;
 int frequenza5=0;
 int frequenza6=0;
    int faccia;
    for(int i=1;i<1000;i++){
             faccia=rand()%6+1;
            switch(faccia){
            case 1 :
                
            ++frequenza1;
                  break;     
            case 2:
                
            ++frequenza2;
                  break;                  
            case 3:
             
            ++frequenza3;
                   break;                 
            case 4:
                
            ++frequenza4;
                   break;                 
            case 5:
                 
            ++frequenza5;
                    break;          
            case 6:
                 
            ++frequenza6;
                     break;            
                 default:
                         cout<<"QUesto caso non si verifica mai :)";
                         }//switch
                         }//for
                         cout<<"Faccia"<<setw(15)<<"Frequenza";
                         cout<<"\n   1"<<setw(15)<<frequenza1;
                         cout<<"\n   2"<<setw(15)<<frequenza2;
                         cout <<"\n   3"<<setw(15)<<frequenza3;
                         cout<<"\n   4"<<setw(15)<<frequenza4;
                         cout<<"\n   5"<<setw(15)<<frequenza5;
                          cout<<"\n   6"<<setw(15)<<frequenza6<<"\n";
                        // system("PAUSE");
                         return 0;
                         }
