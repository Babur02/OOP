#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setx(int x)
    {
        a = x;
    }
    void showx()
    {
        cout << " Base Class A = " << a << endl;
    }
    
};
class B: virtual public A
{
    int b;

public:
    void showy()
    {
        cout << " Base Class B = " << b << endl;
    }
   
};
class C : virtual public A
{
    int c;

public:

    void showz()
    {
        cout << " Derived Class c = " << c << endl;
    }
};
class D : public B, public C
{
    int d;

public:
    
    void showd()
    {
        cout << " Base Class A = " << d << endl;
    }
    
};
int main()
{
    D d;
    d.setx(5);
    d.showx();
   
}