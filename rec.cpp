#include<iostream>
using namespace std ;
//the fibonacci sequence .........1,1,2,3,5,8,13,21..................

int fib(int n){
    if(n<2){

     return 1;
   
    }
    else{
   return fib(n-2)+fib(n-1);
    }
}
int main()
{
int a ;
cout<<"Enter the value of a"<<endl ;
cin>>a ;
cout<<"The term of fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl ;

    
    return 0;
}
