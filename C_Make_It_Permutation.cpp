#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, c, d; cin>>n>>c>>d;
    vector<long long> v(n+1, 0);
    long long distinct = 0;
    for(long long  i = 0 ; i < n ; i++)
    {
        long long x; cin>>x;
        if(x<=n && v[x]==0) distinct++;
        if(x<=n) v[x]++;
    }
    
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t; cin>>t; while(t--)
    solve()
    return 0;
}