#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(string s)
    {
        sort(s.begin(), s.end());
        int i = s.size() / 2;
        s.erase(0, i);
        for (i = 1; i < s.size(); i += 2)
            s.insert(i, "+");
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