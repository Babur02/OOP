#include <iostream>
using namespace std;
template <class A>
class Student
{
    string name;
    A no;

public:
    Student(string x, A r)
    {
        name = x;
        no = r;
    }
    void show()
    {
        cout << "Name of Student is = " << name << endl;
        cout << "No of Student is = " << no << endl;
    }
};
int main()
{
    Student<int> s("Babar", 21);
    s.show();
    cout << endl;
    Student<float> s1("Babar", 4.4);
    s1.show();
    cout << endl;
    return 0;
}