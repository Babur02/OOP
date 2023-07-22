#include <iostream>
using namespace std;
class OperatorOverloading
{
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
    friend OperatorOverloading operator+(OperatorOverloading, OperatorOverloading);
};
OperatorOverloading operator+(OperatorOverloading o1,OperatorOverloading o2)
{
    OperatorOverloading temp; // o4
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    OperatorOverloading o1, o2, o3;
    o1.set_data(2, 3);
    o2.set_data(3, 5);
    o3 = o1 + o2; // o3=temp
    o3.show_data();
}