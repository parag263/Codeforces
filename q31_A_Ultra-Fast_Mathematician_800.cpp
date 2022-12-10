#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void function(string s1, string s2)
    {
        char ans[s1.size()];
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
                ans[i] = '0';
            else
                ans[i] = '1';
        }
        for (int i = 0; i < s1.size(); i++)
        {
            cout << ans[i];
        }
    }
};
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    Solution obj1;
    obj1.function(s1, s2);

    return 0;
}