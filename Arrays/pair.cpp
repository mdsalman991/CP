#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n, x, cnt = 0;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // find the pair.
    // method1 - two loops
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << arr[i] << " " << arr[j] << endl;
                cnt++;
            }
        }
    }
    if (cnt == 0)
        cout << -1 << endl;
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
