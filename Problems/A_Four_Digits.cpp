// Q: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n; cin >> n;
    string s = "0000";
    int j = 3;
    for(int i = n.size()-1; i >= 0; i--)
    {
        s[j] = n[i];
        j--;
    }
    cout << s;
    return 0;
}