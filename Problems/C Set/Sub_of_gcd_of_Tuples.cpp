// Q: https://atcoder.jp/contests/abc162/submissions/me
#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(a == 0) return b;
    return GCD(b%a, a);
}
int main()
{
    int n; cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            for(int k = 1; k <= n; k++)
                {
                    int gcd = GCD(i, j);
                    gcd = GCD(gcd, k);
                    sum += gcd;
                }
    cout << sum;
    return 0;
}