#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin>>n;
    multiset<long long> ml;
    long long ans = 0;
    for(long long i = 0 ; i < n ; i++)
    {
        long long x; cin>>x;
        if(x>0)
        {
            ml.insert(x);
        }
        else if(x==0)
        {
            if(!ml.empty())
            {
                auto it = ml.end();
                it--;
                ans += *it;
                ml.erase(it);
                // ans += *(ml.end()--);
                // ml.erase(*(ml.end()--));
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

// My Solution which didn't work
// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n; cin>>n;
//     vector<int> v(n);
//     int lastHeroPos = 0;
//     int hero = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin>>v[i];
//         if(v[i]==0)
//         {
//             lastHeroPos = i;
//             hero++;
//         }
//     }
//     vector<int> sortedBonus;
//     for(int i = 0 ; i < lastHeroPos ; i++)
//     {
//         if(v[i]>0) sortedBonus.push_back(v[i]);
//     }
//     int i = 0;
//     int ans = 0;
//     sort(sortedBonus.begin(), sortedBonus.end());
//     while((hero--) && i<sortedBonus.size())
//     {
//         ans += sortedBonus[i];
//         i++;
//     }
//     cout<<ans<<"\n";
// }

// signed main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t; cin>>t; while(t--)
//     solve();
//     return 0;
// }