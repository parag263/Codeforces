#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(string s, int n)
    {
        int pointer = 0, ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[pointer] == s[i])
            {
                ans++;
                pointer++;
                continue;
            }
            else
                pointer++;
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    Solution obj1;
    cout << obj1.function(s, n) << endl;

    return 0;
}