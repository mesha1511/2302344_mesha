#include <iostream>
using namespace std;

int main()
{
    int num5;
    cout<<"enter your favorite number from 1 to 5:";
    cin>>num5;
    switch (num5)
    {
    case 1:
    cout<<"your favorite number is 1";
    break;
    case 2:
    cout<<"your favorite number is 2";
    break;
    case 3:
    cout<<"your favorite number is 3";
    break;
    case 4:
    cout<<"your favorite number is 4";
    break;
    case 5:
    cout<<"your favorite number is 5";
    break;
    default:
    cout<<"invalid entry";
    break;
    }
return 0;
    
   
}