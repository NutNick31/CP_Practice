#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n; cin>>n;
	long long n_even = 0;
	long long n_odd = 0;
	long long even = 0;
	long long odd = 0;
	vector<long long> v(n);
	for(long long i = 0 ; i < n ; i++)
	{
		cin>>v[i];
		if(v[i]%2)
		{
			odd = i+1;
			n_odd++;
		}
		else
		{
			even = i+1;
			n_even++;	
		}
	}
	if(n_even==1)
	{
		cout<<even<<"\n";
	}
	else if(n_odd==1)
	{
		cout<<odd<<"\n";
	}
    else
    {
        cout<<"-1\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // long long t; cin>>t; while(t--)
    solve();
    return 0;
}