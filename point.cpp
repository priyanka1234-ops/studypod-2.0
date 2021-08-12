#include<iostream>
#include<cmath>
using namespace std ;

class point
{
int x , y ;
public:
    point(int a , int b){
    x = a ;
    y = b;
    }
    
    void displypoint(){
     cout<<"The point is ("<<x<<" , "<<y<<")"<<endl ;
    }
  friend double distance (point , point);

};

double distance(point p1 , point p2){

double res = sqrt(pow(p1.x - p2.x , 2) + pow(p1.y - p2.y , 2));
return res ;

}
int main(){

     point P(1,1); //IMPLICIT CALL
     P.displypoint() ;

   point Q = point(2,2) ; //EXPLICIT CALL
        Q.displypoint() ;

double result = distance(P,Q);
cout<<"Distance between P and Q is"<<result ;
return 0 ;

}