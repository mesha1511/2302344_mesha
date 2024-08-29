#include <iostream>
using namespace std;

class cons
{
    public:
    int real,img;
    cons(int r=0,int i=0)
    {
        real=r;
        img=i;

    }
    cons operator-(cons& c)
    {
        return cons(real-c.real,img-c.img);

    }
};
int main()
{
    cons c1(3,4),c2(1,2);
    cons c3=c1-c2;
    cout<<"difference: "<<c3.real<<" + "<<c3.img<<"i"<<endl;
    return 0;
}