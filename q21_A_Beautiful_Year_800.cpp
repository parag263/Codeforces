#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int year)
    {
        int tempYear = year + 1;
        while (1)
        {
            set<int> s;
            int d1 = tempYear % 10;
            int d2 = (tempYear / 10) % 10;
            int d3 = (tempYear / 100) % 10;
            int d4 = (tempYear / 1000) % 10;
            s.insert(d1);
            s.insert(d2);
            s.insert(d3);
            s.insert(d4);
            if (s.size() != 4)
            {
                tempYear++;
            }
            else
                break;
        }
        return tempYear;
    }
};
int main()
{
    int y;
    cin >> y;
    Solution obj1;
    cout << obj1.function(y) << endl;
    return 0;
}