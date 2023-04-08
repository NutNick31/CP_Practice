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
	long long n; cin>>n;
	if(n==2)
	{
		string a, b; cin>>a>>b;
		if(a==b) cout<<"YES\n";
		else cout<<"NO\n";
	}
	else
	{
		vector<string> one, multi;
		for(long long i = 0 ; i < 2*n-2 ; i++)
		{
			string x; cin>>x;
			if(x.size()==1)
            {
                one.push_back(x);
            }
			else if(x.size()==n-1)
            {
                multi.push_back(x);
            }
		}
        if(one[0]==one[1])
        {
            string a = multi[0];
            string b = multi[1];
            // char z = one[0].substr(0, 1);
            if(*(a.begin())==*(one[0].begin()) && *(b.rbegin())==*(one[0].begin()))
            {
                a = a.substr(1, n-2);
                b = b.substr(0, n-2);
                cout<<a<<" "<<b<<" ";
                // a.erase(a.begin(), a.begin()+1);
                // b.erase(b.rbegin(), b.rbegin()-1);
                if(a==b) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if(*(a.rbegin())==*(one[0].begin()) && *(b.begin())==*(one[0].begin()))
            {
                b = b.substr(1, n-2);
                a = a.substr(0, n-2);
                cout<<a<<" "<<b<<" ";
                // a.erase(a.rbegin(), a.rbegin()-1);
                // b.erase(b.begin(), a.begin()+1);
                if(a==b) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
        else cout<<"NO\n";
	}
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long t; cin>>t; while(t--)
	solve();
	return 0;
}