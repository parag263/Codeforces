#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(int n, int arr[])
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                return "HARD";
            }
        }
        return "EASY";
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