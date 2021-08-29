#include<iostream>
using namespace std ;

class Base1{
   public:
     void greet(){
     cout<<"How are you ?"<<endl ;

     }


};

class Base2{
   public:
     void greet(){
     cout<<"How's it  going?"<<endl ;

     }


};
class Derived : public Base1 , public Base2 {
    int a ;
  public : 
     void greet(){
       Base1 ::greet() ;

     }  

};
class B{
public :
   void say(){

   cout<<"Hello world"<<endl ;
   }

   };

class D : public B{
   int a ;
   //D'Snew say() method will override base classes's say() mwthod
  public:
     void say(){
     
    cout<<"Hello People"<<endl ;   

     }
};

int main(){
  //Arbibuity 1 
  /*
   Base1 base1obj ;
   Base2 base2obj ;
   base1obj.greet();
   base2obj.greet();
   Derived d ;
   d.greet() ;
*/


//Ambibuity 2
B b ;
b.say();

D d ;
d.say();


return 0 ;
}





