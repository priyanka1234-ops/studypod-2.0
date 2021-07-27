#include<iostream>
using namespace std ;
int main()
{
  float num1 , num2 ;
  char operation ;
  cout<<"Enter the value num1: "<<endl ;
  cin>>num1 ;
  cout<<"Enter the value the num2: "<<endl;
  cin>>num2 ;
  cout<<"Enter the opertion(+,-,*,/): "<<endl;
  cin>>operation ;
  switch (operation)
  {
   case '+' :
    cout<<"result = "<<num1+num2 ;
    break ;
    case '-' :
    cout<<"result = "<<num1-num2;
    break ;
    case '*':
    cout<<"result = "<<num1*num2 ;
    break ;
    case '/' :
    cout<<"result = "<<num1/num2 ;
    break ;
  default:
    cout<<"No opertion perform";
      break;
  }
return 0 ;



}
