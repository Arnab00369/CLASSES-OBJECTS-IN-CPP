#include <iostream>
using namespace std;
class Circle
{
    float a,ar;
    public:
    Circle(float p)
    {
        a=p;
    }
    void area()
    {
        ar=3.142*a*a;
    }
    void print()
    {
        cout<<"The area of the Circle = "<<ar<<" sq. units";
    }
};
int main()
{
    float w;
    cout<<"Enter the radius of the circle ::\nRadius = ";
    cin>>w;
    Circle h(w);
    h.area();
    h.print();
    return 0;
}




