// Q: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int fun(int a, int b, int c)
{
    for(int i = a; i <= b; i++)
        if(i%c == 0) return i;
    return -1;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << fun(a, b, c);   
    return 0;
}