#include <iostream>
using namespace std;
class Ambi
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    Ambi a1;
    a1.setdata(2, 3);
    a1.show();
    cout << endl;
    Ambi a2 = a1; // Copy Constructor
    a2.show();
    cout << endl;
    Ambi a3;
    a3 = a2; // Implicit Copy Assignment Operator
    a3.show();
    cout << endl;
    return 0;
}