#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void function(int weight)
    {
        if (weight == 2)
            cout << "NO" << endl;
        else
        {
            if (weight % 2 != 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
};

int main()
{
    int weight;
    cin >> weight;
    Solution obj1;
    obj1.function(weight);
    return 0;
}