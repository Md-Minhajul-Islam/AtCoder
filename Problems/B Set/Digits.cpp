// Q: https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /= k;
    }
    cout << cnt;
    return 0;
}