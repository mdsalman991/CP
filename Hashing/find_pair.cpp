#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void solve()
{
    // code here
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(x - arr[i]) != m.end())
        {
            cout << "pair found"
                 << " " << arr[i] << ' ' << x - arr[i] << endl;
        }
        m[arr[i]] = i;
    }
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
