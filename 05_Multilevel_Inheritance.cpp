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
class B : public A
{
    int b;

public:
    void sety(int y)
    {
        b = y;
    }
    void showy()
    {
        cout << " Derived Class B  = " << b << endl;
    }
};
class C : public B
{
    int c;

public:
    void setz(int z)
    {
        c = z;
    }
    void showz()
    {
        cout << " Derived Class c = " << c << endl;
    }
};
int main()
{
    C o;
    o.setx(5);
    o.showx();
    o.sety(5);
    o.showy();
    o.setz(5);
    o.showz();
}