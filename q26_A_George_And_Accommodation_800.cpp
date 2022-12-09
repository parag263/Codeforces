#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int n, int arr[][2])
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][1] - arr[i][0] >= 2)
                count++;
        }
        return count;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    Solution obj1;
    cout<<obj1.function(n, arr)<<endl;

    return 0;
}