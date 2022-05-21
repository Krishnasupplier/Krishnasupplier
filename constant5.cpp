#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;          //non-static variable 
        //const int j=10;  should not be written if it works then also
        const int j;
  
        

        Demo(int a, int b):j(b)// dynamic values (user input)
        {
          i=a;
        }
        void fun()
        {
            cout<<"inside fun\n";
            i++;
            //j++;

        }
        void gun() const
        {
            int x= 10;
            const int y= 20;
            cout<<"inside gun\n";
           // i++;
            //j++;  not allowed
            x++;    //allowed
           // y++;  //not allowed
        }
};

int main()
{
   
   Demo obj(11,21);     

    return 0;
}