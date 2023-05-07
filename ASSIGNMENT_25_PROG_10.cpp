#include <iostream>
using namespace std;
class Area
{
    int len,bre,ed,ar,ar1;float rad,ba,h,ar2,ar3;
    public:
    Area(int w,int x,float y,int z,float a,float b)
    {
       len=w;
       bre=x;
       ed=z;
       ba=a;
       h=b;
       rad=y;
    }
    void area()
    {
        ar=len*bre;
        ar1=ed*ed;
        ar2=3.14*rad*rad;
        ar3=0.5*ba*h;
    }
    void print()
    {
        cout<<"\nOUTPUT::\nThe area of the Rectangle = "<<ar<<" sq. units"<<"\nThe area of the Square = "<<ar1<<" sq. units"<<"\nThe area of the Circle = "<<ar2<<" sq. units"<<"The area of the Triangle = "<<ar3<<" sq. units";
    }
};
int main()
{
    int length,breadth,edge;float radius,base,height;
    cout<<"Enter the Required dimensions of the shapes to find out the area ::\nRECTANGLE ::\nEnter Length = ";
    cin>>length;
    cout<<"Enter Breadth = ";
    cin>>breadth;
    cout<<"SQUARE ::\nEnter Edge = ";
    cin>>edge;
    cout<<"CIRCLE ::\nEnter Radius = ";
    cin>>radius;
    cout<<"TRIANGLE ::\nEnter Base = ";
    cin>>base;
    cout<<"Enter Height = ";
    cin>>height;
    Area h1(length,breadth,radius,edge,base,height);
    h1.area();
    h1.print();
    return 0;
}





