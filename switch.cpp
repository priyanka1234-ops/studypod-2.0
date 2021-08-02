//Selection control structure : Switch Case statements
#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cout<<"Enter the value of num : "<<endl;
    cin>>num ;
    switch (num)
    {
    case 1 :
        cout<<"You are in case 1"<<endl ;
        break;
    case 2 :
        cout<<"You are in case 2"<<endl ;
        break;

    case 3:
        cout<<"You are in case 3"<<endl ;
        break;
    case 4:
        cout<<"You are in case 4"<<endl ;
        break;
    default :
        cout<<"No special case";
    
    }
    return 0;
}
