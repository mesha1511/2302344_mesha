#include <iostream>
using namespace std;
 
 class counter{
    private:
    //static variable to keep track of the count
    static int count;

    public:
    //costructor
    counter() {
        count++;

    }
    //static function to get the current count
    static int getcount(){
        return count;
    }
    //static function to rest the count to zero
    static void resetcount() {
        count=0;
    }
 };
 

//initialize static variable outside the class
int counter::count=0;

int main(){
    cout<<"initial count:"<<counter::getcount()<<endl;

    counter c1;
    counter c2;

   cout<<"count after creating 2 instance:"<<counter::getcount()<<endl;
    
    counter::resetcount();
    cout<<"count after reset :" <<counter::getcount()<<endl;


    cout<<"count after creating another instance:"<<counter::getcount()<<endl;
    return 0;



}

