#include<iostream>
using std::cout;
using std::cin;
using std::endl;
double massimo(double,double,double);
int main(){
    double primo,secondo,terzo;
    cout<<"Programma che calcola il massimo di tre numeri\nInserisci tre numeri\n";
    cin>>primo>>secondo>>terzo;
    cout<<"Il massimo risulta "<<massimo(primo,secondo,terzo)<<"\n";
//    system("PAUSE");
    return 0;
}
double massimo(double x,double y,double z){
       double max=x;
       if(y>=z&&y>=x){
                      max=y;
                      }
                      else if(z>=y&&z>=x){
                           max=z;
                           }
                           else{
                           max=x;
}
return max;
}
