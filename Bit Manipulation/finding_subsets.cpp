#include <bits/stdc++.h>
using namespace std;

void fun(string s, int x)
{
    vector<int> a(32, 0);
    int pos = 0;
    while (x)
    {
        if (x & 1)
        {
            a[pos]++;
        }
        pos++;
        x = x >> 1;
    }
    for (int i = 0; i < 32; i++)
    {
        if (a[i])
            cout << s[i] << ' ';
    }
    cout << endl;
}
void solve()
{
    // code here
    // find all possible substrings
    string s;
    cin >> s;
    int n = s.length();
    int range = pow(2, n) - 1;
    for (int i = 0; i <= range; i++)
    {
        fun(s, i);
    }
    return;
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
