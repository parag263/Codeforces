#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int function(int a, int b)
    {
        if (a % b == 0)
            return 0;
        else
            return (b * (a / b)) + b - a;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        Solution obj1;
        cout << obj1.function(a, b) << endl;
    }

    return 0;
}