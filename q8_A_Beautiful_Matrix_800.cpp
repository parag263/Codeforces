#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int arr[][5])
    {
        int ans;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] == 1)
                {
                    ans = (abs(i - 2) + abs(j - 2));
                    break;
                }
            }
        }
        return ans;
    }
};
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    Solution obj1;
    cout << obj1.function(arr) << endl;

    return 0;
}