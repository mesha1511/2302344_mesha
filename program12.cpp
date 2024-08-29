#include <iostream>
#include <string.h>
using namespace std;
int main(){
    struct message
{
    int i=1;
    string word="hello world";

}mobj;


    cout<<mobj.i<<". "<<mobj.word<<endl;
    return 0;

}
