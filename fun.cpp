#include<iostream>
using namespace std ;
//function prototype
//type function-name(arguments);
int sum (int ,int ,int );
int main(){

int a, b, c;
cout<<"Enter the value of a"<<endl ;
cin>>a ;

cout<<"Enter the value of b"<<endl ;
cin>>b ;


cout<<"Enter the value of c"<<endl ;
cin>>c;

cout<<"Print the sum of a, b , c"<<endl ;
cout<<sum(a,b,c) ;

 return 0;   
}
int sum(int a, int b ,int c){
int d = a+b+c;
return d;

}
