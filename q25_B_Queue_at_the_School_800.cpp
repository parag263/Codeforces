#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(int n, int t, string s)
    {
        while (t--)
        {
            for (int i = 1; i < n; ++i)
            {
                if (s[i] == 'G' && s[i - 1] == 'B')
                {
                    s[i] = 'B';
                    s[i - 1] = 'G';
                    ++i;
                }
            }
        }
        return s;
    }
};
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    Solution obj1;
    cout << obj1.function(n, t, s) << endl;
    return 0;
}