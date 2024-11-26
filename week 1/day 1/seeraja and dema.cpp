#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int sum1 = 0, sum2 = 0, Turn = 1;
    while (!dq.empty())
    {
        int left = dq.front(), 
        right = dq.back(), mx;
        mx = max(left, right);
        if (Turn % 2 != 0)
        {
            sum1 += mx;
        }
        else
        {
            sum2 += mx;
        }
        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        Turn++;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}