#include<iostream>
using namespace std ;

class student {
    int rollno ;
    static int  count ;
 
    public :
       void setdata(void)
        {
          cout<<"Enter the Roll No. of Student"<<endl ;
          cin>>rollno ;
          count ++ ;


        }
      void getdata(void) 
        {
          
          cout<<"The Roll No. of this student is "<<rollno<<" and this is student number "<<count<<endl ;


        }
      static void getcount(void){
       
         cout<<"The value of count is "<<count<<endl ;


       }

}  ;
int student :: count ;
int main(){

student ankit , aarvi , rahul ;

ankit.setdata() ;
ankit.getdata() ;
student :: getcount() ;

aarvi.setdata() ;
aarvi.getdata() ;
student ::getcount() ;

rahul.setdata() ;
rahul.getdata() ;
rahul.getcount() ;


return 0 ;



}