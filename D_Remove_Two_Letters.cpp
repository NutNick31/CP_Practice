#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    set<string> ms;
    for(int i = 0 ; i < n-1 ; i++)
    {
        string newS = "";
        for(int j = 0 ; j < n ; j++)
        {
            if(j!=i || j!=(i+1))
            {
                newS += s[i];
            }
        }
        cout<<newS<<" ";
        ms.insert(newS);
    }
    cout<<ms.size()<<"\n";
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}