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
class C : public A
{
    int c;

public:
    void setz(int z)
    {
        c = z;
    }
    void showz()
    {
        cout << " Derived Class C = " << c << endl;
    }
};
class D : public B
{
    int d;
public:
     void showd()
    {
        cout << " Derived Class D = " << d << endl;
    }
};
class E : public B
{
    int e;
public:
     void showe()
    {
        cout << " Derived Class E = " << e << endl;
    }
};
int main()
{
   D d;
   d.setx(4);
   d.showx();
   E e;
   e.sety(2);
   e.showy();
}