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

long long maxDiff(long long number)
{
    long long maxi = INT_MIN;
	long long mini = INT_MAX;
	while(number>0)
	{
		maxi = max(maxi, number%10);
		mini = min(mini, number%10);
		number /= 10;
	}
	return abs(maxi-mini);	
}

void solve()
{
	// long long n; cin>>n;
	long long l, r; cin>>l>>r;
	long long maxDifference = INT_MIN;
	long long finalAnswer = 0;
	for(long long i = l ; i <= r ; i++)
	{
		long long a = maxDiff(i);
		// long long a = abs(maximumDigit(i)-minimumDigit(i));
		// maxDifference = max(maxDifference, 
		// abs(maximumDigit(i)-minimumDigit(i)));
		// cout<<maximumDigit(i)<<" "<<minimumDigit(i)<<" ";
		if(maxDifference<=a)
		{
			maxDifference = a;
			finalAnswer = i;
		}
        if(maxDifference==9) break;
	}
	cout<<finalAnswer<<"\n";
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}   