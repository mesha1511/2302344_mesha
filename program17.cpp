#include <iostream>
using namespace std;

class product
{
    char name[30];
    int price;

    public:
    void getproduct()
    {
        cout<<"product name= ";
        cin>>name;
        cout<<"price= ";
        cin>>price;

    }
    void printproduct()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
    const int size =3;
    product t[size];
    for(int i=0;i<size;i++)
    {
        cout<<"product :"<<(i+1)<<"\n";
        t[i].getproduct();

    }
    for(int i=0;i<size;i++)
    {
        cout<<"product details :"<<(i+1)<<"\n";
        t[i].printproduct();
    }
}
 