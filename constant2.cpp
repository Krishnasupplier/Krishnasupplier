#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        //const int j=10;  should not be written if it works then also
        const int j;
        Demo():j(20)    //member initialization
        {
            i=10;
           // j=20; should not be done like this
        
        }
};

int main()
{
   
   Demo obj;

   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";
    return 0;
}