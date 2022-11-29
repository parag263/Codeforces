#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int x, int y, int z)
    {
        if (x == 1 && y == 1)
        {
            return 1;
        }
        else if (x == 1 && z == 1)
        {
            return 1;
        }
        else if (z == 1 && y == 1)
        {
            return 1;
        }
        else
            return 0;
    }
};
int main()
{
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        Solution obj1;
        if (obj1.function(x, y, z))
            ans++;
    }
    cout << ans << endl;
    return 0;
}