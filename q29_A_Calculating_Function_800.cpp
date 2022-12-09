#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    ll function(ll n)
    {
        if (n % 2 == 0)
            return n / 2;
        else
            return -(n / 2) - 1;
    }
};
int main()
{
    ll n;
    cin >> n;
    Solution obj1;
    cout << obj1.function(n) << endl;

    return 0;
}