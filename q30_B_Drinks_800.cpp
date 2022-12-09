#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    float function(int n, int arr[])
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return (float)sum / n;
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
    cout << obj1.function(n, arr) << endl;

    return 0;
}