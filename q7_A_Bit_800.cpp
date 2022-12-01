#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(string s)
    {
        if (*s.begin() == '+' || *(s.begin() + s.size() - 1) == '+')
            return 1;
        else
            return -1;
    }
};
int main()
{
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        Solution obj1;
        x += obj1.function(s);
    }
    cout << x << endl;
    return 0;
}