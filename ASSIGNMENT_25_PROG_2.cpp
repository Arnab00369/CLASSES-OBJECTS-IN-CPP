#include <iostream>
using namespace std;
class Time
{
    int a,b,c;
    public:
        Time(int x,int y,int z)
        {
           a=x;
           b=y;
           c=z;
        }
        void print()
        {
            cout<<"\nOUTPUT ::\nTime :: "<<a<<" : "<<b<<" : "<<c;
        }
};
int main()
{
    int p,q,r;
    cout<<"Enter the Hour : ";
    cin>>p;
    cout<<"Enter the Minute : ";
    cin>>q;
    cout<<"Enter the Second : ";
    cin>>r;
    Time c(p,q,r);
    c.print();
    return 0;
}

