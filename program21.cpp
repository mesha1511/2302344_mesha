#include <iostream>
using namespace std;

class Animal{
    public:
    void display()
    {
        cout<<"this is Animal class"<<endl;
    }
    
};
class cat:public Animal{
    public:
    void show()
    {
        cout<<"this is a cat class"<<endl;
    }
};
main()
{
    cat c;
    c.display ();
    c.show();
    return 0;
}