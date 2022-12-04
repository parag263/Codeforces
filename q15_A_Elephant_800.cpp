#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int x)
    {
        if (x <= 5)
            return 1;
        else if (x % 5 == 0)
            return (x / 5);
        else
            return (x / 5) + 1;
    }
};
int main()
{
    int x;
    cin >> x;

    Solution obj1;
    cout << obj1.function(x) << endl;
    return 0;
}