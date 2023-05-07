#include <iostream>
using namespace std;
class Greatest
{
    int a,b,c,m;
    public:
    Greatest(int p,int q,int r)
    {
        a=p;
        b=q;
        c=r;
    }
    void largest()
    {
        m=(a>b)?((a>c)?a:c):((b>c)?b:c);
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
    Greatest h(w,x,y);
    h.largest();
    h.print();
    return 0;
}

