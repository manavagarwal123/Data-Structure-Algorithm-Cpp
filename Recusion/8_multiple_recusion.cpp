#include <iostream>
using namespace std;
int func(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = func(n - 1);
    int secondlast = func(n - 2);
    return last + secondlast;
}
int main()
{
    cout << func(4);
}