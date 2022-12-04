#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int n, int k)
    {
        while (k--)
        {
            if (n % 10 == 0)
            {
                n /= 10;
            }
            else
            {
                n--;
            }
        }
        return n;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;

    Solution obj1;
    cout << obj1.function(n, k) << endl;
    ;

    return 0;
}