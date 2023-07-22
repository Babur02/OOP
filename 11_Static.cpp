#include <iostream>
using namespace std;
void fun()
{
    int x = 0;    // Local Variable
    static int y; // Static Local Variable
    x++;
    y++;
    cout << "Value of local variable is = " << x << endl; // Garbage Value
    cout << "Value of static variable is = " << y << endl;
};
class A
{
    static int a; // Static Member Variable
public:
    void show()
    {
        cout << "a=" << a << endl;
    }
    static void func(); // Static Member Function
};

int A::a = 100; // Define Static Member Variable
void A::func()  // Define Static Function
{
    cout << "Func function called" << endl;
}
int main()
{
    A o;
    fun();
    fun();
    o.show();
    o.func();  // Object call
    A::func(); // Without Object
    return 0;
}