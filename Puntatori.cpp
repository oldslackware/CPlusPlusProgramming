#include<iostream>
using std::cout;
using std::endl;
int main(){
    int a;
    int *aPtr;
    a=10;
    aPtr=&a;//ASSEGNO L'INDIRIZZO DI A AL PUNTATORE APTR
    cout<<"\n\n\nL'indirizzo di a e' "<<&a<<endl;
    cout<<"IL valore  di aPtr e' "<<aPtr<<endl;
    cout<<"Il valore di a e'"<<a<<endl;
    cout<<"Il valore di *aPtr e' "<<*aPtr<<endl;
    system("PAUSE");
    return 0;
}
