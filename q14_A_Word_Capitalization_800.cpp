#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(string s)
    {
        s[0] = toupper(s[0]);
        return s;
    }
};
int main()
{
    string s;
    cin >> s;

    Solution obj1;
    cout << obj1.function(s) << endl;

    return 0;
}