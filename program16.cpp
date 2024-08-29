#include <iostream>
using namespace std;
 
class example{
    public:
    int a;
    example add(example Ea,example Eb)
    {
        example Ec;
        Ec.a=Ea.a + Eb.a;

        return Ec;

    }
};
int main()
{
    example E1,E2,E3;
    E1.a=50;
    E2.a=100;
    E3.a=0;

    cout<<"intial values\n";
    cout<<"value of object 1:"<<E1.a
        <<",\nobject 2:"<<E2.a
        <<",\nobject 3:"<<E3.a
        <<"\n";
        E3=E3.add(E1,E2);

        cout<<"New values\n";
        cout<<"value of object 1:"<<E1.a
         <<",\nobject 2:"<<E2.a
         <<",\nobject 3:"<<E3.a
         <<"\n";
         return 0;
}