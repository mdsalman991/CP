#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n, cnt = 0;
    cin >> n;
    while (n)
    {
        cnt += (n & 1);
        n = n >> 1;
    }
    cout << cnt;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
