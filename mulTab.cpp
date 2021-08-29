#include<iostream>
#include<conio.h>
using namespace std ;
class A
{
int n,i ,res ;

public:
 void table()
 {
    cout<<"Enter a number "<<endl;
    cin>>n ;
    for (int i = 1; i < 11; i++)
    {
          res = n*i ;
          cout<<n<<"*"<<i<<"="<<res<<endl  ;

    }
    
    }

};

int main(){
 A obj ;
 obj.table() ;

return 0 ;
}
