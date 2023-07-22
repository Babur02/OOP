#include <iostream>
using namespace std;
class Person // Abstract Class
{

public:
    virtual void Name() = 0; // Pure Virtual Function
    virtual void No() = 0;   // Pure Virtual Function
};
class Student : public Person
{

public:
    string name, no;
    void Name() // Overriding of Pure Virtual Function
    {
        cout << " Enter Student Name = ";
        getline(cin, name);
    }
    void No() // Overriding of Pure Virtual Function
    {
        cout << " Enter Student No = ";
        getline(cin, no);
    }
    void show()
    {
        cout << "Name of Student is " << name << endl;
        cout << "No of Student is " << no << endl;
    }
};
class Faculty : public Person
{

public:
    string name, no;
    void Name()
    {
        cout << " Enter Facultuy Name = ";
        getline(cin, name);
    }
    void No()
    {
        cout << " Enter Faculty No = ";
        getline(cin, no);
    }
    void show()
    {
        cout << "Name of Faculty is " << name << endl;
        cout << "No of Faculty is " << no;
    }
};

int main()
{
    Student s;
    Faculty f;
    s.Name();
    s.No();
    cout << endl;
    s.show();
    cout << endl;
    f.Name();
    f.No();
    cout << endl;
    f.show();
}