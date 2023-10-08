// Q: https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n], limit = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > limit) limit = a[i];
    }
    int ans, max_gcdness = 0;
    for(int i = 2; i <= limit; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[j] % i == 0) cnt++;
        }
        if(cnt > max_gcdness)
        {
            max_gcdness = cnt;
            ans = i;
        }
    }
    cout << ans;
    
    return 0;
}