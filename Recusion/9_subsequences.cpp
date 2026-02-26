// to print all the subsequence of all array
#include <iostream>
using namespace std;
void subseq(int index, int arr[], vector<int> &ans, int n)
{
    if (index == n)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        if (ans.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[index]);
    subseq(index + 1, arr, ans, n);
    ans.pop_back();

    subseq(index + 1, arr, ans, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[] = {3, 1, 2};
    vector<int> ans;
    subseq(0, arr, ans, n);
}
