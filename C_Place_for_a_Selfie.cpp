#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m; cin>>n>>m;
    vector<int> v(n);
    for(long long i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    while(m--)
    {
        long double a, b, c; cin>>a>>b>>c;
        if(4*a*c < 0)
        {
        	cout<<"NO\n";
            continue;
        }
        long double left = b - 2*sqrt(a*c);
        long double right = b + 2*sqrt(a*c);
        auto it = upper_bound(v.begin(), v.end(), left);
        if(it==v.end())
        {
            cout<<"NO\n";
            continue;
        }
        if((*it)<right)
        {
            cout<<"YES\n";
            cout<<(*it)<<"\n";
        }
        else
        {
            cout<<"NO\n";
            continue;
        }
    }
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}