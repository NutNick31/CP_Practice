#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
	return (a*b)/(__gcd(a,b));
}

bool palindrome(string s)
{
	long long l = s.size();
	for(long long i = 0 ; i < l ; i++)
	{
		if(s[i]!=s[l-i-1]) return false;
	}
	return true;
}

long long maximumDigit(long long number)
{
	long long maxi = INT_MIN;
	while(number>0)
	{
		maxi = max(maxi, number%10);
		number /= 10;
	}
	return maxi;
}

long long minimumDigit(long long number)
{
	long long mini = INT_MAX;
	while(number>0)
	{
		mini = min(mini, number%10);
		number /= 10;
	}
	return mini;	
}

void solve()
{
	long long n; cin>>n;
	if(n%2==0)
	{
		cout<<"-1\n";
	}
	else
	{
		long long step = 0;
		for(long long i = 31 ; i >= 0 ; i--)
		{
			if(n&(1<<i))
			{
				step = i;
				break;
			}
		}
		vector<long long> v;
		while(n>1)
		{
			if(((n-1)/2)%2==1)
			{
				v.push_back(2);
				n = (n-1)/2;
			}
			else if(((n+1)/2)%2==1)
			{
				v.push_back(1);
				n = (n+1)/2;
			}
		}
		cout<<step<<"\n";
		v.resize(v.size());
		reverse(v.begin(), v.end());
		for(long long i = 0 ; i < v.size() ; i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}