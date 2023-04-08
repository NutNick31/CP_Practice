#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m; cin>>n>>m;
    long long arr[n][m];
    for(long long i = 0 ; i < n ; i++)
    {
        for(long long j = 0 ; j < m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    if(n==1)
    {
        cout<<"0\n";
    }
    else
    {
        long long answer = 0;
        for(long long j = 0 ; j < m ; j++)
        {
            vector<long long> column;
            for(long long i = 0 ; i < n ; i++)
            {
                column.push_back(arr[i][j]);
            }
            sort(column.begin(), column.end());
            long long x = (-1*(n-1));
            for(long long k = 0 ; k < column.size() ; k++)
            {
                answer+=(x*column[k]);
                x+=2;
            }
        }
        cout<<answer<<"\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t; cin>>t; while(t--)
    solve();
    return 0;
}