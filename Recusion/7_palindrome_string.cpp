// check if the string is palindrome or not

#include <iostream>
using namespace std;
bool func(int i, string s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    func(i + 1, s);
}
int main()
{
    string s = "manav";
    cout << func(0, s);
}