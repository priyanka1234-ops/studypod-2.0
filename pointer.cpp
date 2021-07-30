#include<iostream>
using namespace std ;
int main()
{
    // Pointer is a datatype which holds the address of other datatypes

    int a = 3;
    int* p = &a ;   
     // &----> (address of) operator
    cout<<"the address of a is "<<&a<<endl ;
    cout<<"the address of a is "<<p<<endl ;
    // * ----> (value at) dereference  operator
    cout<<"the value at address b is : "<<*p<<endl  ;
    // Pointer to pointer 
    int **q = &p ;
    cout<<"the address of p is "<<&p<<endl ;
    cout<<"the address of p is  "<<q<<endl ;
    cout<<"the value at address q is "<<*q<<endl ;
    cout<<"the value at address  value_at(value_at(q)) is "<<**q<<endl ;
    return 0;
}
