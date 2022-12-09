#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void function(int n, int arr[])
    {
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[arr[i] - 1] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution obj1;
    obj1.function(n, arr);

    return 0;
}