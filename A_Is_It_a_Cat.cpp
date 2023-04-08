#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] += 32;
        }
    }
    string req = "meow";
    string newReq = "";
    int no = 0;
    bool isMeow = true;
    if(s[0]!='m')
    {
        cout<<"NO\n";
    }
    else
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(i==0 || s[i]!=s[i-1])
            {
                newReq += s[i];
            }
        }
        // cout<<s<<" "<<newReq<<"\n";
        if(newReq == req) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
    // }
    // else
    // {
    //     no = 1;
    //     for(int i = 1 ; i < n ; i++)
    //     {
    //         if(s[i]!=s[i-1] && (s[i]!=req[no] || no==4))
    //         {
    //             isMeow = false;
    //         }
    //         else if(s[i]!=s[i-1] && s[i]==req[no])
    //         {
    //             no++;
    //         }
    //         // else if(s[i]!=s[i-1] && no==4)
    //         // {

    //         // }
    //         if(!isMeow) break;
    //     }
    //     if(!isMeow) cout<<"NO\n";
    //     else cout<<"YES\n";
    // }