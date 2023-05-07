#include <iostream>
using namespace std;
class Factorial
{
    int a,fact=1;
    public:
        Factorial(int x)
        {
            a=x;
        }
        void facto()
        {
            for(int i=1;i<=a;i++)
            fact*=i;

        }
        void print()
        {
            cout<<"\nOUTPUT :\nThe Factorial of "<<a<<" is "<<fact;
        }

};
int main()
{
    int p;
    cout<<"Enter a Number = ";
    cin>>p;
    Factorial h(p);
    h.facto();
    h.print();
    return 0;
}
