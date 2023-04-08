#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n; cin>>n;
    vector<long long> v(n);
    for(long long i = 0 ; i < n ; i++)
    {
        cin>>v[i];
        v[i] += 1;
    }
    for(long long i = 0 ; i < n ; i++)
    {
        if(i)
        {
            if(v[i]%v[i-1]==0) v[i]++;
        }
    }
    for(long long i = 0 ; i < n ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t; cin>>t; while(t--)
    solve();
}