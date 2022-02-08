#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n, zero = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zero++;
    }
    int t = 0;
    while (zero--)
    {
        arr[t++] = 0;
    }
    while (t < n)
    {
        arr[t++] = 1;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    // sort this array in all possible ways
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
