#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int n, int h, int arr[])
    {
        int width = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > h)
            {
                width += 2;
            }
            else
                width++;
        }
        return width;
    }
};
int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution obj1;
    cout << obj1.function(n, h, arr) << endl;

    return 0;
}