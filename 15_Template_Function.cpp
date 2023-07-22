#include <iostream>
using namespace std;

template <class X>
X func(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}
template <class X,class Y>
X func(X a, Y b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout << func(4, 5)<<endl;
    cout << func(4.5, 5)<<endl;
    cout << func(4.2, 5.5);
    return 0;
}