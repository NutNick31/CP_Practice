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

void solve()
{
	long long a,b; cin>>a>>b;
    if(__gcd(a,b)==1)
    {
        cout<<"1\n";
        cout<<a<<" "<<b<<"\n";
    }
    else
    {
        cout<<"2\n";
        if(__gcd(a-1,b)==1) cout<<a-1<<" "<<b<<"\n";
        else if(__gcd(a+1,b)==1) cout<<a+1<<" "<<b<<"\n";
        else if(__gcd(a,b-1)==1) cout<<a<<" "<<b-1<<"\n";
        else if(__gcd(a,b+1)==1) cout<<a<<" "<<b+1<<"\n";
        cout<<a<<" "<<b<<"\n";
    }
    // else
    // {
    //     cout<<"2\n";
    //     cout<<a-1<<" "<<b<<"\n";
    //     cout<<a<<" "<<b<<"\n";
    // }
    // else if(a!=b)
    // {
    //     if(a%b==0 || b%a==0)
    //     {
    //         cout<<2<<"\n";
    //         cout<<a-1<<" "<<b<<"\n";
    //         cout<<a<<" "<<b<<"\n";
    //     }
    //     else
    //     {
    //         cout<<1<<"\n";
    //         cout<<a<<" "<<b<<"\n";
    //     }
    // }
	// else
	// {
    //     cout<<"2\n";
    //     cout<<a<<" "<<b<<"\n";
	// }
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}