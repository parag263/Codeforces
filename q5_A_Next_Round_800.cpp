#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int function(int score[], int k, int n)
    {
        // k-1
        int count = 0;
        int base = score[k - 1];
        // if base is zero

        for (int i = 0; i < n; i++)
        {
            if (score[i] >= base && score[i] > 0)
                count++;
        }

        return count;
    }
};
int main()
{
    int n, k;
    cin >> n >> k;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    Solution obj1;
    cout << obj1.function(score, k, n) << endl;
    return 0;
}