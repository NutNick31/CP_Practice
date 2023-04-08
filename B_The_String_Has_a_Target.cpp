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

// void solve()
// {
// 	long long n; cin>>n;
// 	long long n_even = 0;
// 	long long n_odd = 0;
// 	long long even = 0;
// 	long long odd = 0;
// 	vector<long long> v(n);
// 	for(long long i = 0 ; i < n ; i++)
// 	{
// 		cin>>v[i];
// 		if(v[i]%2)
// 		{
// 			odd = i+1;
// 			n_odd++;
// 		}
// 		else
// 		{
// 			even = i+1;
// 			n_even++;	
// 		}
// 	}
// 	if(even<odd)
// 	{
// 		cout<<even<<"\n";
// 	}
// 	else
// 	{
// 		cout<<odd<<"\n";
// 	}
// }

void solve()
{
	long long n; cin>>n;
	string s; cin>>s;
	string answer = s;
	char lastMoved = s[0];
	long long i = n-1;
	long long len = 0;
    char smallest = s[0];
    for(long long i = 1 ; i < n ; i++)
    {
        if(s[i]<smallest) smallest = s[i];
    }
    // cout<<smallest<<" ";
	while(i>0)
	{
		if(s[i]==smallest)
		{
            lastMoved = s[i];
			s.erase(i, 1);
			s = lastMoved + s;
            break;
		}
        i--;
	}
	cout<<s<<"\n";
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}