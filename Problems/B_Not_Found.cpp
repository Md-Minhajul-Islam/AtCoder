// Q: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for(int i = 0; i < s.size(); i++)
        a[s[i]-'a']++;
    int flag = 0;
    for(char i = 'a'; i <= 'z'; i++)
        if(!a[i-'a'])
        {
            cout << i; flag = 1; break;
        }
    if(!flag) cout << "None";
    return 0;
}