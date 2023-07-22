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
        cout << " Base Class a = " << a << endl;
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
        cout << " Derived Class b = " << b << endl;
    }
};
int main()
{
    B o1;
    o1.setx(5);
    o1.showx();
    o1.sety(6);
    o1.showy();
}