#include<iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setprecision;
const double PI=3.14159265358979;
int main(){
    const double PI=1.23546897456;
    cout<<setprecision(4)
    <<"Variabile locale di tipo float="<<PI
    <<"\nVariabile globale di tipo double="<< ::PI<<endl;
//    system("PAUSE");
    return 0;
    }
