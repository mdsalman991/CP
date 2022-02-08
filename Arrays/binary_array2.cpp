#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ptr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 1)
        {
            // if it is zero swap it from the start
            swap(arr[i], arr[ptr]);
            ptr++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
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
