#include <iostream>
using namespace std;
class Car
{

public:
    void shiftgear()
    {
        cout << " Car Class Gear Changed = " << endl;
    }
};
class SportsCar : public Car
{

public:
    void shiftgear()
    {
        cout << " SportsCar Class Gear Changed = " << endl;
    }
};
int main()
{
    SportsCar o;
    o.shiftgear();
    
}