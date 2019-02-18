#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
#include<cstring>
using std::string;
using std::strcpy;
using std::strcat;
using std::strlen;
int main(){
    const int size=30;
    char animale[size];
    char animale2[size];
    string otherAnimal;
    string otherAnimal2;
    cout<<"Inserisci un animale "<<endl;
    cin.getline(animale,size);
    cout<<"\nInserisci un altro animale "<<endl;
    getline(cin,otherAnimal);
    strcpy(animale2,animale);//copio animale in animale2
    otherAnimal2=otherAnimal;//copio la stringa otherAnimal in otherAnimal2
    
    otherAnimal+=" e' molto conosciuto";
    strcat(animale," e' astuto");
    
    cout<<"\n\nIl/La"<<animale<<endl;
    cout<<"\nCopia di array char\nanimale2="<<animale2<<endl;
    cout<<"\n\nIl/La"<<otherAnimal<<endl;
    cout<<"\nCopia di stringhe\notherAnimal2="<<otherAnimal2<<endl;
    
    int lunghezzaCharArray=strlen(animale2);
    int lunghezzaStringa=otherAnimal2.size();
    cout<<"\n"<<animale2<<" contiene "<<lunghezzaCharArray<<" caratteri"<<endl;
    cout<<"\n\n"<<otherAnimal2<<" contiene "<<lunghezzaStringa<<" caratteri\n\n\n";
//    system("PAUSE");
    
    return 0;
     }
