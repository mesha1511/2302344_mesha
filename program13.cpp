#include <iostream>
using namespace std;

class employee {
    public:
    int employee_id ;
    string employee_name,employee_address;


    void employee_info(){
        cout<<"employee_info"<< endl;
        cout<<"employee_id:"<<employee_id<< endl;
        cout<<"employee_name:"<<employee_name<< endl;
        cout<<"employee_address:"<<employee_address<< endl;
       
    
    }
};

class permanent_employee:public employee {

    public:
    float basicpay,DA,HRA,TA;
    void salary(){
        float sum=0;
        sum=(basicpay+DA+HRA+TA);
        cout<<"salary= "<<sum;

    }
    };
int main()

{
    permanent_employee obj1;
   obj1. employee_id=34567;
   obj1. employee_name= "abc";
    obj1. employee_address="xyz";
    obj1.basicpay=30000;
    obj1.DA=25000;
    obj1.HRA=28000;
    obj1.TA=26000;
    obj1.employee_info();
    obj1.salary();
    
    return 0;
}
