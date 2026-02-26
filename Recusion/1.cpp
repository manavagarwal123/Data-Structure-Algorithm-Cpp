// Print N times name

#include <iostream>
using namespace std;

void name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "raj" << endl;
    name(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    name(1, n);
}
