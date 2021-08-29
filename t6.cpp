#include<iostream>
using namespace std ;
int main()
{   int a , b;
     cout<<"enter the value of a \n";
     cin>>a;
     cout<<"enter the value of b \n";
     cin>>b;
    cout<<"operators in C++:"<<endl ;
    cout<<"FOLLOWING ARE THE TYPES OF OPERATORS IN C++"<<endl;
   // ARITHMETIC OPERATORS
    cout<<"the value of a+b is"<<a+b<<endl;
     cout<<"the value of a-b is"<<a-b<<endl;
     cout<<"the value of a*b is"<<a*b<<endl;
     cout<<"the value of a/b is"<<a/b<<endl;
     cout<<"the value of a%b is"<<a%b<<endl;
     cout<<"the value of a++ is"<<a++<<endl; 
     cout<<"the value of a-- is"<<a--<<endl;
     cout<<"the value of ++a is"<<++a<<endl;
//COMPARISON OPERATORS
    cout<<"FOLLOWING ARE THE COMPARISON OPERATORS I C++"<<endl;
   cout<<"the value of a==b is"<<(a==b)<<endl;
     cout<<"the value of a>b is"<<(a>b)<<endl;
     cout<<"the value of a<b is"<<(a<b)<<endl;
     cout<<"the value of a<=b is"<<(a<=b)<<endl;
     cout<<"the value of a>=b is"<<(a>=b)<<endl;
     
//LOGICAL OPERATORS
 cout<<"FOLLOWING ARE THE LOGICAL  OPERATORS I C++"<<endl;
   cout<<"the value of this AND operator is ((a==b)&&(a<b)) is"<<((a==b)&&(a<b))<<endl;
      cout<<"the value of this OR operator is ((a==b)||(a<b))is"<<((a==b)||(a<b))<<endl;
      cout<<"the value of this NOT operator is (!(a==b)) is"<<(!(a==b))<<endl;
    
    return 0;
}
