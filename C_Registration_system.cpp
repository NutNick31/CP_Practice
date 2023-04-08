#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n; cin>>n;
    map<string, int> freq;
    while(n--)
    {
        string s; cin>>s;
        if(freq[s])
        {
            cout<<s<<freq[s]<<"\n";
            freq[s]++;
        }
        else
        {
            freq[s]++;
            cout<<"OK\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // long long t; cin>>t; while(t--)
    solve();
    return 0;
}