#include<iostream>
using namespace std ;

class complex
{
    int a , b ;
public :
complex(void); //constructors declaration
void printNumber(){
      cout<<"Your complex number is "<<a<<"  +  "<<b<<"i"<<endl ;
 }
};
complex :: complex(void){
a = 10;
b= 0;

}

int main(){
complex c ;
c.printNumber() ;

return 0;
}