#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
#include<cstdlib>
int main(){
    cout<<"Simulazione reale con la chiamata srand.\nNotare che adesso l'output varia ogni volta che si lancia il programma\n"<<endl;
    srand(time(0));
    for(int i=1;i<=100;i++){
            cout<<setw(3)<<rand()%6+1;
            if(i%10==0){
                        cout<<endl;
            }
            }
           // system("PAUSE");
            return 0;
            }
