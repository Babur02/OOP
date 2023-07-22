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
    OperatorOverloading operator+(OperatorOverloading o)
    {
        OperatorOverloading temp; // o4
        temp.a = a + o.a;
        temp.b = b + o.b;
        return temp;
    }

    OperatorOverloading add(OperatorOverloading o)
    {
        OperatorOverloading temp; // o4
        temp.a = a + o.a;
        temp.b = b + o.b;
        return temp;
    }
};

int main()
{
    OperatorOverloading o1, o2, o3, o4, o5, o6;
    o1.set_data(2, 3);
    o2.set_data(3, 5);
    o3 = o1 + o2; // o3=temp
    o3.show_data();
    o4.set_data(2, 3);
    o5.set_data(3, 5);
    o6 = o4.add(o5); // normal way of adding
    o6.show_data();
}