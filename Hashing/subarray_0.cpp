#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>

void solve()
{
    // code here
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // efficent way.
    unordered_set<int> set;
    set.insert(0);
    for (int i = 0; i < n; i++)
    {
        cnt += arr[i];
        if (set.find(arr[i]) != set.end())
        {
            cout << "present" << endl;
        }
        else
        {
            set.insert(cnt);
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
