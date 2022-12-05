#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(vector<vector<int>> vec, int n)
    {
        int capacity = vec[0][1];
        int ans = capacity;
        for (int i = 1; i < n; i++)
        {
            capacity = capacity + vec[i][1] - vec[i][0];
            ans = max(ans, capacity);
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
    }
    Solution obj1;
    cout << obj1.function(vec, n) << endl;

    return 0;
}