#include<iostream>
using namespace std ;
//declaration class
 class vehicle 
{  
private:
    void stroke()
      {  int a ;
          cout<<"4stroke / 2 stroke";
      }
 
 private :
    void manWhomade()
     {
           cout<<"Markus Librette ";
     }

public :
    void company()
    {
          cout<<"Renault \n";
    }
public :
    void modal()
    {
          cout<<"Duster \n" ;
    }
public :
   void color()
   {
         cout<<"Red/Brown/black \n";
   }
public :
  void cost()
  {
         cout<<"Rs. 600000 to 9000000 \n";
  }
public:
    void oil()
    {
          cout<<"Petrol \n" ;
    }
public :
   void piston(int a1)
   {
       cout<<a1<<endl ;
   }    
};
 
int main()
{   
    vehicle obj ;
    obj.company();
    obj.modal();
    obj.color();
    obj.cost();
    obj.oil();
    obj.piston(4);
    
    return 0;
}
