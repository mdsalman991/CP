#include <bits/stdc++.h>
using namespace std;
int a[32];

void count_fun(int x)
{
    int pos = 0;
    while (x)
    {
        if (x & 1)
            a[pos]++;
        pos++;
        x = x >> 1;
    }
}
void solve()
{
    // code here
    int arr[] = {2, 5, 3, 2, 2, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        count_fun(arr[i]);
    }
    for (int i = 0; i < 32; i++)
    {
        a[i] = a[i] % 3;
    }
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        num += (a[i] * (1 << i));
    }
    cout << num;
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
