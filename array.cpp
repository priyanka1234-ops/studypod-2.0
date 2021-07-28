#include<iostream>
using namespace std ;
int main()
{
    int marks[] = {37, 44, 56, 78} ;
    cout<<"student's marks"<<endl ;
     cout<<marks[0]<<endl ;
     cout<<marks[1]<<endl ;
     cout<<marks[2]<<endl ;
     cout<<marks[3]<<endl ;

//another way
   int mathmarks[4] ;
     mathmarks[0] = 78 ;
     mathmarks[1] = 88;
     mathmarks[2] = 45;
     mathmarks[3] = 67;
cout<<"these are math marks"<<endl ;     
cout<<mathmarks[0]<<endl ;
cout<<mathmarks[1]<<endl ;
cout<<mathmarks[2]<<endl ;
cout<<mathmarks[3]<<endl ;

//using for loop 
 int chmarks[4] ;
     chmarks[0] = 578 ;
     chmarks[1] = 828;
     chmarks[2] = 545;
     chmarks[3] = 767;
  
  for(int i=0; i<4;i++) 
     {
       cout<<"the value of marks "<<i<<" is "<<chmarks[i]<<endl ;

     } 


//....................ARRAY AND POINTERS......................
int *p = marks ;
 
cout<<"the value of *p is "<<*p<<endl ;
cout<<"the value of *(p+1) is "<<*(p+1)<<endl ;
cout<<"the value of *(p+2) is "<<*(p+2)<<endl ;
cout<<"the value of *(p+3) is "<<*(p+3)<<endl ;


    return 0;
}