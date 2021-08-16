#include<iostream>
using namespace std ;

class number{
   int a ;
   public :
      number(){
          a = 0 ;
      }
      number(int  num){
        a = num ;
      }
      //When no copy constructor is found , complier supplies its own copy constructors
      number(number &obj){
        cout<<"Copy constructor called  "<<endl ;
        a = obj.a ;
      }

      void display(){
          cout<<"The number for this object is "<<a<<endl ;
      }
};
int main(){
  number x(30) , y ,z(45),z2;
  x.display() ;
  y.display() ;
  z.display() ;

  number z1(x);  //copy constructor invoked
  z1.display();

  z2 = z ;  //copy consructor not called
  z2.display();

 number z3 = z ; //copy constructor invoked
 z3.display() ;


  //z1 should exactly resemble z or x or y

return 0;
}