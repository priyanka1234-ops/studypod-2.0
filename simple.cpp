#include<iostream>
using namespace std ;

class simple
{
int data1 , data2, data3 ;
public:
    simple(int a , int b = 9 ,int c=4){
        data1 = a ;
        data2 = b;
        data3 = c ;
    }
    void printdata() ;

};

void simple ::printdata(){

        cout<<"The value of data1 , data2 and data3 is "<<data1<<","<<data2<<","<<data3<<endl ;

}
int main(){
simple s(12,13);
s.printdata();

simple t(2,3,6) ;
t.printdata();

}