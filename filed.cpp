#include<iostream>
using namespace std ;


float moneyReceived(int currentmoney , float factor=1.6){

return currentmoney*factor ;


}
int main()
{
int money = 10000 ;
cout<<"If the value "<<money<<"Rs in your bank account "<<moneyReceived(money )<<"Rs after 1 year"<<endl;
cout<<"For vip : If you have "<<money<<"Rs in your bank account "<<moneyReceived(money , 1.5)<<"Rs after 1 year"<<endl;    
    return 0;
}
