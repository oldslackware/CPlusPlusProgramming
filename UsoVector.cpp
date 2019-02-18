#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>
using std::setw;
#include<vector>
using std::vector;
void inputVector(vector<int> &);
void outputVector(const vector<int> &);
int main(){
    int dim;
    cout<<"Quanti elementi vuoi inserire\n"<<endl;
    cin>>dim;
    vector<int>v1(dim);
    vector<int>v2(dim*2);
    cout<<"La dimensione del vector uno e' "<<v1.size();
    cout<<"\nGli elementi del vector uno non inizializzato sono:\n"<<endl;
    outputVector(v1);
    system("PAUSE");
    cout<<"\nLa dimensione del vector due e' "<<v2.size();
    cout<<"\nGli elementi del vector due non inizializzato sono "<<endl;
    outputVector(v2);
    system("PAUSE");
    cout<<"\nInserisci "<<dim+(dim*2)<<" elementi "<<endl;
    inputVector(v1);
    inputVector(v2);
    cout<<"GLi elementi del vector uno ora sono "<<endl;
    outputVector(v1);
    cout<<"Gli elementi del vector due sono "<<endl;
    outputVector(v2);
    if ( v1 != v2 )
         cout << "\nVector1 e vector2 Non sono uguali \n" << endl;
         //Copio il vector uno nel nuovo vector3
vector<int>v3(v1);
         cout<<"La dimensione del vector tre e' "<<v1.size();
         cout<<"\nGli elementi del vector tre non inizializzato sono:\n"<<endl;
         outputVector(v3);
         if ( v1 == v3 )
         cout << "\nVector1 e vector3  sono uguali \n" << endl;          
                     
    
    
    system("PAUSE");
    return 0;
    }
    
     void outputVector( const vector< int > &array ){
     size_t i; // variabile i di tipo size_t
      for ( i = 0; i < array.size(); i++ ){
        cout << setw( 12 ) << array[ i ];

         if ( ( i + 1 ) % 4 == 0 ) // 4 numbers per row of output
            cout << endl;      
            } // end for

     if ( i % 4 != 0 )
        cout << endl;
  } // end function outputVector

  // input vector contents
  void inputVector( vector< int > &array ){
     for ( size_t i = 0; i < array.size(); i++ )
       cin >> array[ i ];
  } // end function inputVector

    
    
    
