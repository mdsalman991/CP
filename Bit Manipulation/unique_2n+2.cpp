#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int arr[] = {1, 2, 3, 5, 6, 3, 2, 1};
    int res = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        res = (res ^ arr[i]);
    }
    int pos = 0;
    int temp = res;
    while ((temp & 1) == 0)
    {
        /* code */
        pos++;
        temp = temp >> 1;
    }
    int setA = 0;
    int setB = 0;
    int mask = 1 << pos;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & mask) > 0)
        {
            setA = setA ^ arr[i];
        }
        else
        {
            setB = setB ^ arr[i];
        }
    }
    cout << setA << " " << setB << endl;
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
