#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int function(int s1, int s2, int s3, int s4)
    {
        set<int> s;
        s.insert(s1);
        s.insert(s2);
        s.insert(s3);
        s.insert(s4);
        return 4 - s.size();
    }
};
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    Solution obj1;
    cout << obj1.function(s1, s2, s3, s4) << endl;

    return 0;
}