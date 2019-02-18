#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
#include<cstdlib>
using std::rand;
using std::srand;
//#include<time.h>
//using std::time;
#include<ctime>
int main(){
const int size=7;
int frequenza[size]={0};//Array cob tutti gli elementi posti a zero
srand(time(NULL));//genero numeri realmente casuali
for(int i=1;i<6000000;i++)
frequenza[rand()%6+1]++;//incremento  l'allocazine dell'array in base al numeor casuakle
cout<<"Faccia"<<setw(13)<<"Frequenza"<<endl;
//Stampo la frequenza di tutti gli elementi da 1 a 7
for(int j=1;j<size;j++){
        cout<<setw(4)<<j<<setw(13)<<frequenza[j]<<endl;
} 
       // system("PAUSE");
        return 0;




     }
