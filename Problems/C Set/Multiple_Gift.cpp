// Q: https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y; cin >> x >> y;
    long long ans = 0;
    while(x <= y)
    {
        ans += 1; x *= 2;
    }
    cout << ans;
    return 0;
}