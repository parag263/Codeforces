#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int function(int n, vector<int> vec)
    {
        int p, q;

        p = vec[0];
        q = vec[n - 1];
        int k, l;
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (vec[i] <= p)
            {
                k = i;
                p = vec[i];
            }
            if (vec[j] >= q)
            {
                l = j;
                q = vec[j];
            }
        }
        if (l > k)
            return l + (n - k - 1) - 1;
        else
            return l + (n - k - 1);
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    Solution obj1;
    cout << obj1.function(n, vec) << endl;

    return 0;
}
