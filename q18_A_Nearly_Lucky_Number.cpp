#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string function(long long int n)
    {
        int count = 0;
        while (n)
        {
            // cout << "n: " << n << endl;
            int t = n % 10;
            if (t == 4 || t == 7)
                count++;
            n /= 10;
        }
        if (count == 4 || count == 7)
            return "YES";
        else
            return "NO";
    }
};
int main()
{
    long long int n;
    cin >> n;
    Solution obj1;
    cout << obj1.function(n);
    return 0;
}