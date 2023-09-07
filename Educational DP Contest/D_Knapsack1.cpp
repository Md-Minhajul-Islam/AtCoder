// Q: https://atcoder.jp/contests/dp/tasks/dp_d
#include<bits/stdc++.h>
using namespace std;
int val[105], weight[105];
long long dp[105][100005];
long long knapsack(int n, int wt_left)
{
    if(n < 0 || wt_left == 0) return 0;
    if(dp[n][wt_left] != -1) return dp[n][wt_left];
    if(wt_left >= weight[n])
    {
        long long choice1 = knapsack(n-1, wt_left-weight[n]) + val[n];
        long long choice2 = knapsack(n-1, wt_left);
        return dp[n][wt_left] = max(choice1, choice2); 
    }
    else 
        return dp[n][wt_left] = knapsack(n - 1, wt_left);
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for(int i = 0; i < n; i++)
        cin >> weight[i] >> val[i];
    cout << knapsack(n-1, w);    
    return 0;
}