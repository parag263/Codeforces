#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int m, int n)
    {
        return (m * n) / 2;
    }
};
int main()
{
    int m, n; // board dimension
    cin >> m >> n;
    // Domino's dimension: 2 x 1
    Solution obj1;

    cout << obj1.function(m, n) << endl;

    return 0;
}