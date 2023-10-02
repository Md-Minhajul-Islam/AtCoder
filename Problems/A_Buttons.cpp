// Q: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; cin >> a >> b;
    cout << max(a, b)+max(max(a, b)-1, min(a, b));
    return 0;
}