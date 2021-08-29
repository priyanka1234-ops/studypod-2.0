#include<iostream>
using namespace std ; 
// Base Class
class Employee
{
public : 
     int id ;
     float salary ;
     Employee(int inpID)
     {
      id = inpID ;
     salary = 34000.0 ;
     }
    Employee(){}

};
//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}
NOTE:
1.Default visibility mode is private
2.Public Visibility Mode : Public member of the base class becomes Public members of the dervied class
3.Private Visibility Mode : Public member of the base class becomes Private members of the derived class
4.Private members are never inherited 
*/
//Creating a Programmer class derived from employee base class
class Programmer : public Employee
{
public :
   int languageCode ;
   Programmer (int inpID)
   {
     id = inpID ;
     languageCode = 12;

   }
   void getdata(){
      
       cout<<id<<endl ;

   }


} ;

int main(){
  Employee rahul(1), ankit(2) ;
  cout<<rahul.salary<<endl ;
  cout<<ankit.salary<<endl ;

  Programmer skillf(10) ;
  cout<<skillf.languageCode<<endl ;
  cout<<skillf.id<<endl ;
  skillf.getdata() ; 

  return 0 ;

}






