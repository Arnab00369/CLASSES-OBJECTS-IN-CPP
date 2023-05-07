#include <iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int x,int y)
        {
           a=x;
           b=y;
        }
        void print()
        {
            cout<<"Complex Number = "<<a<<" + "<<b<<" i"<<endl;
        }
};
int main()
{
    int p,q;
    cout<<"Enter the real part : ";
    cin>>p;
    cout<<"Enter the imaginary part : ";
    cin>>q;
    Complex c(p,q);
    c.print();
    return 0;
}

