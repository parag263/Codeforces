#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void function(string s)
    {
        unordered_map<char, int> um;
        for (int i = 0; i < s.size(); i++)
            um[s[i]]++;
        if (um.size() % 2 != 0)
            cout << "IGNORE HIM!" << endl;
        else
            cout << "CHAT WITH HER!" << endl;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj1;
    obj1.function(s);
    return 0;
}