#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[] = {1, 2, 3, 4, 3, 2, 1, 6, 7, 8, 4, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res;
}

int main()
{

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
