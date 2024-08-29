#include<iostream>
using namespace std;

void function(int &a,int &b)


{
    int temp;
    cout<<"before swap: a="<<a<<" b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap: a="<<a<<" b="<<b<<endl;
}
int main(){
    int a,b;
    cout<<"enter 2 values:";
    cin>>a>>b;
    function(a,b);
    return 0;

}