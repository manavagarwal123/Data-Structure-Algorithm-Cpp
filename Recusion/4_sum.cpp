// #include <iostream>
// using namespace std;
// void fun(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << sum << endl;
//         return;
//     }
//     fun(i - 1, sum + i);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     fun(n, 0);
// }

#include <iostream>
using namespace std;
void fun(int i, int sum, int n)
{
    if (i > n)
    {
        cout << sum << endl;
        return;
    }
    fun(i + 1, sum + i, n);
}
int main()
{
    int n;
    cin >> n;
    fun(0, 0, n);
}
