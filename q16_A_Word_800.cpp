#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(string s)
    {
        int lowCount = 0;
        int upCount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= 90)
                upCount++;
            else
                lowCount++;
        }
        if (upCount > lowCount)
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        else
            transform(s.begin(), s.end(), s.begin(), ::tolower);
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