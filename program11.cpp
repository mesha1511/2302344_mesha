                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include <iostream>
#include <math.h>
using namespace std;

int main() {
   int c;
    cout<<"enter your favorite number:";
    cin>>c;
    switch (c)
    {
    case 1:
    cout<<"Square root of 20 = ";
    cout << sqrt(20);
    break;
    case 2:
    cout<<"the round value of 6.2= ";
    cout << round(6.2);
    break;
    case 3:
    cout<<"the maximum value of (5,10)=";
    cout<< max(5, 10);
    break;
    case 4:
    cout<<"the minimum value of (5,10)=";
    cout<< min(5, 10);
    break;
    case 5:
    cout<<"the log value of 8=";
    cout << log(8);
    break;
     case 6:
    cout<<" the absolute value of -5=";
    cout <<abs(-5);
    break;
     case 7:
    cout<<" the ceil value of 7.8=";
    cout <<ceil(7.8);
    break;
     case 8:
    cout<<" the floor value of 7.8=";
    cout <<floor(7.8);
    break;
    case 9:
    cout<<" the power value of (7.8,9.5)=";
    cout <<pow(7.8f,9.5f);
    break;
    default:
    cout<<"invalid entry";
    break;
    }
return 0;
    
   
}


 


