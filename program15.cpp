#include <iostream>
using namespace std;

class emp{
    private:
    string name;
    int age,salary;
    public:
    void getdata();void putdata();};
    void emp::getdata() {
        cout<<"enter empname:"<<endl;
        cin>>name;
        cout<<"enter age:"<<endl;
        cin>>age;
         cout<<"enter salary:"<<endl;
        cin>>salary;}
        void emp::putdata(){
            cout<<"emp name:"<<name<<endl;
            cout<<"emp age:"<<age<<endl;
            cout<<"emp salary:"<<salary<<endl;
            }
            int main()
            {
                emp doctor[2];
                  emp engineer[2];
                  for(int i=0;i<2;i++)
                  {
                    cout<<"for doctor:"<<endl;
                    doctor[i].getdata();

                  }
                  cout<<endl;
                  for(int i=0;i<2;i++)
                  {
                    cout<<"doctor data:"<<endl;
                    doctor[i].putdata();

                  }
                  for(int i=0;i<2;i++)
                  {
                    cout<<"for engineer:"<<endl;
                    engineer[i].getdata();
                  }
                  for(int i=0;i<2;i++)
                  {
                    cout<<"engineer data:"<<endl;
                    engineer[i].putdata();
                  }
                  return 0;
                  

            }
