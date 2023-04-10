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
    long long arr[2][n];
    long long maximum = 2*n;
    long long minimum = 1;
    for(long long i = 0 ; i < 2 ; i++)
    {
        for(long long j = 0 ; j < n ; j++)
        {
            if(i==0)
            {
                if(j==0)
                {
                    arr[i][j] = 2*n;
                }
                else if(j==1)
                {
                    arr[i][j] = 2;
                }
                else if(j%2==0)
                {
                    arr[i][j] = arr[i][j-2] - 2;
                }
                else if(j%2==1)
                {
                    arr[i][j] = arr[i][j-2] + 2;
                }
            }
            if(i==1)
            {
                if(j==0)
                {
                    arr[i][j] = 1;
                }
                else if(j==1 && j<n-1)
                {
                    arr[i][j] = 2*n-3;
                }
                else if(j==n-1)
                {
                    arr[i][j] = 2*n-1;
                }
                else if(j%2==0)
                {
                    arr[i][j] = arr[i][j-2] + 2;
                }
                else if(j%2==1)
                {
                    arr[i][j] = arr[i][j-2] - 2;
                }
            }
        }
    }
    for(long long i = 0 ; i < 2 ; i++)
    {
        for(long long j = 0 ; j < n ; j++)
        {
            cout<<arr[i][j]<<" ";
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