#include <iostream>
using namespace std;

class Destructor
{
private:
    int a, b;

public:
    ~Destructor() // Default Destructor
    {
        cout << "Default Destructor" << endl;
    }
};
void fun()
{
    Destructor d1;
}

int main()
{
    fun();
    return 0;
}