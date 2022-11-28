#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(string s)
    {
        string ans;
        int x = s.size();
        if (x <= 10)
            return s;
        else
        {
            ans = s.front();
            ans += to_string(x-2);
            ans += s.back();
            return ans;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj1;
        cout << obj1.function(s) << endl;
    }

    return 0;
}