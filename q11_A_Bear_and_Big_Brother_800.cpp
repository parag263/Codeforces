#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int a, int b)
    {
        int year = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            year++;
        }
        return year;
    }
};
int main()
{
    int a, b; // limak, bob>>3, 2
    cin >> a >> b;
    Solution obj1;
    cout << obj1.function(a, b) << endl;

    return 0;
}