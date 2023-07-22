#include <iostream>
using namespace std;
class Student
{
private:
    int a, b, *p;

public:
    Student() //  Default Constuctor to create Dynamic int
    {
        p = new int; // dynamic int Created
    }
    void set_data(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }

    void show_data()
    {
        cout << "a = " << a << " b = " << b << " p = " << *p << endl;
    }
    Student(Student &s) // Copy Constructor to create another copy of p for each object
    {
        a = s.a;
        b = s.b;
        p = new int; // dynamic int Created
        *p = *(s.p); //
    }
    ~Student()
    {
        delete p;
    }
};

int main()
{
    Student s1;
    cout << endl;
    s1.set_data(1, 2, 3);
    cout << "s1 Object Data Values" << endl;
    s1.show_data();
    cout << endl;
    Student s2 = s1;
    cout << "s2 Object Data Values" << endl;
    s2.show_data();
    cout << endl;
    s2.set_data(1, 2, 5);
    cout << "s2 Object Data Values" << endl;
    s2.show_data();
    cout << endl;
    cout << "s1 Object Data Values" << endl;
    s1.show_data();
    cout << endl;
    Student s3;
    s3 = s1;
    cout << "s3 Object Data Values" << endl;
    s3.show_data();
    cout << endl;
}
