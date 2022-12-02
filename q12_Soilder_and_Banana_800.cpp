#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int k, int n, int w)
    {
        int cost = (k * w * (w + 1) / 2) - n;
        if (cost < 0)
            return 0;
        return cost;
    }
};
int main()
{
    int k, n, w; // k>>banana cost, n>>initial dollars, w>>want bananas

    cin >> k >> n >> w;
    Solution obj1;
    cout << obj1.function(k, n, w) << endl;

    return 0;
}