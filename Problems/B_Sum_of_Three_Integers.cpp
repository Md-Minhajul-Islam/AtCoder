// Q: https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, s; cin >> k >> s;
    long long ans = 0;
    for(int i = 0; i <= k; i++)
        for(int j = 0; j <= k; j++)
            if((s-i-j) >= 0 && (s-i-j) <= k) ans++;
    cout << ans;
    return 0;
}