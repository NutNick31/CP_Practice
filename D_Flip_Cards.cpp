#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n; cin>>n;
    // cout<<(5>>3); => 0
	vector<pair<int, int>> v;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	int ans = 0;
	for(int i = 0 ; i < (1<<n) ; i++)
	{
		set<int> s;
		for(int j = 0 ; j < n ; j++)
		{
			if((i>>(j))&1)
			{
				s.insert(v[j].first);
			}
			else
			{
				s.insert(v[j].second);
			}
		}
		if(s.size()==n) ans++;
	}
	cout<<ans;
}
 
signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// int t; cin>>t; while(t--)
	solve();
	return 0;
}
