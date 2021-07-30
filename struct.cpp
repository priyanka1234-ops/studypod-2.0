#include<iostream>
using namespace std ;
struct book
{
  char name ;  
  float price ;
  int page ;


    
};



int main()
{
struct book chemistry ;
struct book physics ;
struct book maths ;
chemistry.name = 'A';
chemistry.page = 250 ;
chemistry.price = 150.50 ;

physics.name = 'B' ;
physics.page = 456 ;
physics.price = 350 ;

maths.name = 'C';
maths.page = 790 ;
maths.price = 400.67;
cout<<"Name"<<" "<<"Page"<<" "<<"Price"<<endl ;
cout<<chemistry.name<<"   "<<chemistry.page<<"   "<<chemistry.price<<endl ;
cout<<physics.name<<"   "<<physics.page<<"  "<<physics.price<<endl ;
cout<<maths.name<<"   "<<maths.page<<"   "<<maths.price<<endl ;


    return 0;
}
