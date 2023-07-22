#include <iostream>
using namespace std;
class Car
{

public:
    virtual void shiftgear() // IF this function is not Virtual then Early Binding occurs
    {
        cout << " Car Class Gear Changed " << endl;
    }
};
class SportsCar : public Car
{

public:
    void shiftgear()
    {
        cout << " SportsCar Class Gear Changed " << endl;
    }
};
int main()
{
    Car *p;         // Base Class Pointer
    SportsCar o;    // Derived Class Object
    p = &o;         // P refers to Derived Class Object
    p->shiftgear(); // Late Binding (prefer content over type)
}