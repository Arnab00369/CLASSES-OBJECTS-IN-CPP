#include <iostream>
using namespace std;
class Square
{
    int n,sq;static int c;
    public:
        Square(int a)
        {
            n=a;
        }
        void findsq()
        {
            c++;
            sq=n*n;
        }
        void print()
        {
            cout<<"The square of "<<n<<" is "<<sq<<" and the function is called for "<<c<<" time";
        }
};
int Square::c=0;
int main()
{
    int p;
    cout<<"Enter a Number = ";
    cin>>p;
    Square h(p);
    h.findsq();
    h.print();
    return 0;
}
