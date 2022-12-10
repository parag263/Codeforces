#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string function(int n)
    {
        string s1 = "I hate it";
        string s11 = "I hate that ";
        string s2 = "I love it";
        string s22 = "I love that ";
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 && i % 2 == 0) // for 1st case only
                ans += s1;
            else if (i == n - 1 && i % 2 != 0) // for 1st case only
                ans += s2;
            else if (i % 2 == 0)
                ans += s11;
            else
                // (i % 2 != 0)
                ans += s22;
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    Solution obj1;
    cout << obj1.function(n) << endl;
    return 0;
}