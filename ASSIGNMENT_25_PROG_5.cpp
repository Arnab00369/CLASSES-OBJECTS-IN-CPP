#include <iostream>
using namespace std;
class ReverseNumber
{
    int n,rev=0,n1;
    public:
        ReverseNumber(int a)
        {
            n=a;
        }

        void rever()
        {
            n1=n;
            while(n>0)
            {
                rev=rev*10+(n%10);
                n/=10;
            }
        }
        void print()
        {
            cout<<"\nOUTPUT::\nReverse of "<<n1<<" is "<<rev;
        }
};
int main()
{
     int p;
     cout<<"Enter a Number = ";
     cin>>p;
     ReverseNumber h(p);
     h.rever();
     h.print();
     return 0;
}
