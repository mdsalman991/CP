#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == x)
        {
            cout << arr[low] << ' ' << arr[high] << endl;
        }
        arr[low] + arr[high] > x ? high-- : low++;
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
