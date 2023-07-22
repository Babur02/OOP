#include <iostream>
using namespace std;
class Student
{
private:
    int a, b;
    int *p;

public:
    Student()
    {
        a = 0;
        b = 0;
        p = new int;
    }
    Student(int x, int y, int z) // Dynamic Constructor
    {
        a = x;
        b = y;
        p = new int; // Dynamically created Memory
        *p = z;
    }
    void Show()
    {
        cout << "Value of a = " << a << endl;
        cout << "Value of b = " << b << endl;
        cout << "Value of p = " << *p << endl;
    }
    ~Student()
    {
        delete p;
    }
};
int main()
{
    Student s1, s2, s3(5, 6, 7);
    s3.Show();
}
