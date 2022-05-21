#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;
    
        Demo()
        {
            cout<<"Inside Default constructor\n";
            x=0;
            y=0;
        }
        Demo(int i, int j)
        {
            cout<<"insidde parametrised constructor\n";
            x=i;
            y=j;
        }
        Demo(Demo &asf)
        {
            cout<<"inside copy constructor\n";
            x=asf.x;
            y=asf.y;
        }
        ~Demo()
        {
            cout<<"inside Destructor\n";
        }        
        
};
int main()
{
    Demo obj1(11,21);
    

    Demo obj2(obj1);

    return 0;
}
