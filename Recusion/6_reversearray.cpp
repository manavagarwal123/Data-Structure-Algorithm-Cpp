// // reverse an array using recursion
// #include <iostream>
// using namespace std;
// void func(int left, int right, int arr[])
// {
//     if (left >= right)
//     {
//         return;
//     }
//     swap(arr[left], arr[right]);
//     func(left + 1, right - 1, arr);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     func(0, n - 1, arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// using one variable
#include <iostream>
using namespace std;
void fun(int i, int n, int arr[])
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    fun(i + 1, n, arr);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    fun(0, n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}