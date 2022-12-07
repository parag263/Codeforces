#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(string s, string t)
    {
        if (s.size() != t.size())
            return "NO";
        else
        {
            reverse(s.begin(), s.end());
            if (s == t)
                return "YES";
            else
                return "NO";
        }
    }
};
int main()
{
    string s, t;
    cin >> s >> t;
    Solution obj1;
    cout << obj1.function(s, t) << endl;

    return 0;
}