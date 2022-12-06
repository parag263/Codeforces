#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(int n, string s)
    {
        int A = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                A++;
            }
        }
        if (A > (n - A))
            return "Anton";
        else if (A < (n - A))
            return "Danik";
        else
            return "Friendship";
    }
};
int main()
{
    int number;
    cin >> number;
    string s;
    cin >> s;

    Solution obj1;
    cout << obj1.function(number, s) << endl;
    return 0;
}