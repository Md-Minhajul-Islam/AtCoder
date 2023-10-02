// Q: https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 2; i < n; i++)
        if(s[i-2] == 'A' && s[i-1] == 'B' && s[i] == 'C') cnt++;
    cout << cnt;
    return 0;
}