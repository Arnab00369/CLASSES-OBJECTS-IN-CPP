#include <iostream>
using namespace std;
class Rectangle
{
    int a,b,ar;
    public:
    Rectangle(int p,int q)
    {
        a=p;
        b=q;
    }
    void area()
    {
        ar=a*b;
    }
    void print()
    {
        cout<<"The area of the Rectangle = "<<ar<<" sq. units";
    }
};
int main()
{
    int w,x;
    cout<<"Enter the length and breadth of the rectangle ::\nLength = ";
    cin>>w;
    cout<<"Breadth = ";
    cin>>x;
    Rectangle h(w,x);
    h.area();
    h.print();
    return 0;
}


