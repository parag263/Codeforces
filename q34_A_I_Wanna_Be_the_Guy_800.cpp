#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string function(vector<int> v1, vector<int> v2, int p, int q, int n)
    {
        set<int> s;
        for (int i = 0; i < p; i++)
            s.insert(v1[i]);
        for (int i = 0; i < q; i++)
            s.insert(v2[i]);

        if (s.size() == n)
            return "I become the guy.";
        else
            return "Oh, my keyboard!";
    }
};
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;

    vector<int> v1;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    int q;
    cin >> q;
    vector<int> v2;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }

    Solution obj1;
    cout << obj1.function(v1, v2, p, q, n) << endl;

    return 0;
}