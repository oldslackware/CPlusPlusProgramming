#include<iostream>
using std::cout;
using std::endl;
int main(){
    int x=5;
    int &y=x;//y adesso e' un alias
    cout<<"X="<<x<<endl<<"y="<<y<<endl;
    y=10;//modificando l'alias modifico il valore che lo puntava
    cout<<"\nDOpo la modifica all'alias avremo\n";
    cout<<"X="<<x<<endl<<"y="<<y<<endl;
    system("PAUSE");
    return 0;
    }
