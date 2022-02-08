#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // subarray of size 1 to n-1
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cnt += arr[k];
            }
            if (cnt == 0)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << ' ';
                }
                cout << endl;
            }
            cnt = 0;
        }
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
