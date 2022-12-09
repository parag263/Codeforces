#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int function(int n, char ch[])
    {
        int groups = 1;
        for (int i = 0; i < n - 2; i+=2)
        {
            if (ch[i] != ch[i + 2])
                groups++;
        }
        return groups;
    }
};
int main()
{
    int n;
    cin >> n;
    char ch[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> ch[i];
    Solution obj1;
    cout << obj1.function(2 * n, ch) << endl;

    return 0;
}