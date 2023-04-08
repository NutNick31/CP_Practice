#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<int> small(26,0), cap(26,0);
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i]>=65 && s[i]<=90) cap[s[i]-'A']++;
        else if(s[i]>=97 && s[i]<=122) small[s[i]-'a']++;
    }
    int ans = 0;
    for(int i = 0 ; i < 26 ; i++)
    {
        int x = min(small[i], cap[i]);
        ans += x;
        small[i] -= x;
        cap[i] -= x;
    }
    while(k--)
    {
        for(int i = 0 ; i < 26 ; i++)
        {
            if(small[i]>1)
            {
                small[i] -= 2;
                ans++;
                break;
            }
            else if(cap[i]>1)
            {
                cap[i] -= 2;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}