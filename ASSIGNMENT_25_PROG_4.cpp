#include <iostream>
using namespace std;
class LargestNumber
{
    int a,b,c,m;
    public:
    LargestNumber(int p,int q,int r)
    {
        a=p;
        b=q;
        c=r;
    }
    void largest()
    {
        if(a>b&&a>c)
            m=a;
        else if(b>a&&b>c)
            m=b;
        else
            m=c;
    }
    void print()
    {
        cout<<"\nOUTPUT::\nThe largest among "<<a<<","<<b<<" and "<<c<<" is "<<m;
    }
};
int main()
{
    int w,x,y;
    cout<<"Enter three numbers ::\n1st Number = ";
    cin>>w;
    cout<<"2nd Number = ";
    cin>>x;
    cout<<"3rd Number = ";
    cin>>y;
    LargestNumber h(w,x,y);
    h.largest();
    h.print();
    return 0;
}
