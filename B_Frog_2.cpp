#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    vector<int> heights(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>heights[i];
    }
    vector<int> dp(n, -1);
    dp[0] = 0;
    for(int i = 1 ; i < n ; i++)
    {
        vector<int> v(n, INT_MAX);
        for(int j = 0 ; j < k ; j++)
        {
            if(i>=j)
            {
                v[i] = min(dp[i-j] + abs(heights[i]-heights[i-j]), v[i]);
            }
        }
        dp[i] = v[i];
    }
    cout<<dp[n-1];
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
    return 0;
}