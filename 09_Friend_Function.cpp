#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void setx(int x)
    {
        a = x;
    }
    friend void fun(A, B);
};
class B
{
    int b;

public:
    void sety(int y)
    {
        b = y;
    }
    friend void fun(A, B);
};
void fun(A obj1, B obj2)
{
    cout << "a + b = " << obj1.a + obj2.b;
}
int main()
{
    A a;
    B b;
    a.setx(5);
    b.sety(5);
    fun(a, b);
}