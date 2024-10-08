#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll input;
bool dp[100005];
bool rec(ll n)
{
    if (n > input)
        return false;
    if (n == input)
        return true;
    if (dp[n])
        return false;
    dp[n] = true;
    return rec(n + 3) || rec(n * 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> input;
        memset(dp, 0, sizeof(dp));
        bool flag = rec(1);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}