#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int function(int k, int l, int m, int n, int d)
    {
        int count = 0;
        for (int i = 1; i <= d; i++)
        {
            if (i % k == 0)
            {
                continue;
            }
            else if (i % l == 0)
                continue;
            else if (i % m == 0)
                continue;
            else if (i % n == 0)
                continue;
            else
            {
                count++;
            }
        }
        return d - count;
    }
};
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    Solution obj1;
    cout << obj1.function(k, l, m, n, d) << endl;

    return 0;
}