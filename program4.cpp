#include<iostream>
using namespace std;
int main()

{
    int temp=0,A,B;
    cout<<"enter A:";
    cin>>A;
    cout<<"enter B:";
    cin>>B;
    temp=A;
    A=B;
    B=temp;
    cout<<"A;"<<A<<"\n";
    cout<<"B;"<<B<<"\n";
    return 0;
    
}
