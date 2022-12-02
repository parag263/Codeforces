#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(string s1, string s2)
    {
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] > s2[i])
                return 1;
            else if (s1[i] < s2[i])
                return -1;
        }
        return 0;
    }
};
int main()
{
    Solution obj1;
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << obj1.function(s1, s2) << endl;
    return 0;
}