#include <iostream>
using namespace std;

long long combination(long long n, long long k)
{
    if (n == k)
    {
        return 1;
    }
    if (k == 1)
    {
        return n;
    }
    if (k == 0)
    {
        return 1;
    }
    return n * combination(n - 1, k - 1) / k;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        cout << combination(n - 1, k - 1) << endl;
    }
    return 0;
}
