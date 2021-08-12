#include<iostream>
using namespace std ;

class point
{
int x , y ;
public:
  point(){
   x  = 0 ;
   y = 0 ;
  }
  point(int a , int b){
     x = a ;
    y = b;

  }

point(int a){
   x = a ;
   y = 0 ;
}

void printnumber(){

cout<<"Your point is ("<<x<<" , "<<y<<")"<<endl ;

}


};

int main(){

point P(2,3) ;
P.printnumber() ;

point Q(4);
Q.printnumber() ;

point R ;
R.printnumber() ;

return 0 ;
}








