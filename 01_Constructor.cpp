#include <iostream>
using namespace std;

class Constructor
{
private:
    int a, b;

public:
    Constructor() // Default Constructor
    {
        cout << "Default Constructor" << endl;
    }

    Constructor(int x) // Parametrized Constructor
    {
        a = x;
        cout << "Parameterized Constructor -> Value of a is = " << a << endl;
    }
    Constructor(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized Constructor -> Value of a is = " << a  << " Value of b is = " << b << endl;
            
    }

    Constructor(Constructor &c) // Copy Constructor
    {
        a = c.a;
        b = c.b;
        cout << "Copy Constructor -> Value of a is = " << a << endl
             << "Value of b is = " << b << endl;
    }
};

int main()
{
    Constructor c1, // Default Constructor Object
        c2(2),      // Parametrized Constructor Object of one argument
        c3 = 5,     // Parametrized Constructor Object another way
        c4(3, 5),   // Parametrized Constructor Object of multiple arguments
                    // c5(c4);     // Copy Constructor Object c5=c4
        c5 = c4;
    return 0;
}