#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long n; cin>>n;
	int answerArr[5];
    answerArr[0] = 0;
    answerArr[1] = 0;
    answerArr[2] = 6;
    answerArr[3] = 28;
    answerArr[4] = 96;
    int no = n*n;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i<=4)
		{
			cout<<answerArr[i]<<"\n";
		}
		else
		{
			long long ans = (i*i*(i*i-1) - 48 - (i-4)*40 - 8*(i-4)*(i-4))/2;
			cout<<ans<<"\n";
		}
	}
}
 
signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// long long t; cin>>t; while(t--)
	solve();
	return 0;
}
