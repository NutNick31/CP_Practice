// My Solution
/*
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s1, s2;
	cin>>s1>>s2;
    int n1 = s1.size();
    int n2 = s2.size();
	map<char, int> freq;
	for(int i = 0 ; i < n1 ; i++)
	{
		freq[s1[i]]++;
	}
	string commonString = "";
	string tempCommonString = "";
    int prev = 0;
	for(int i = 0 ; i < n2 ; i++)
	{
        freq[s2[i]]--;
		if(freq[s2[i]]>=0)
		{
            if(prev==i-1 || commonString.size()<1)
            {
                tempCommonString += s2[i];
                commonString = tempCommonString;
                prev = i;
            }
		}
		else
		{
			if(tempCommonString.size() > commonString.size())
			{
				commonString = tempCommonString;
			}
            tempCommonString = "";
		}
        if(commonString.size()>=2) break;
	}
	if(commonString.size()>1)
	{
		cout<<"YES\n"<<"*"<<commonString<<"*\n";
	}
    else if(commonString.size()==1 && s1[0]==commonString[0] && s2[0]==commonString[0])
    {
        cout<<"YES\n"<<commonString<<"*\n";
    }
    else if(commonString.size()==1 && s1[n1-1]==commonString[0] && s2[n2-1]==commonString[0])
    {
        cout<<"YES\n*"<<commonString<<"\n";
    }
	else
	{
		cout<<"NO\n";
	}
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t; while(t--)
	solve();
	return 0;
}
*/


// Actual Solution
# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;
        int ale=a.size();
        int ble=b.size();
        int p=0;
        if(a[0]==b[0]){
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
        }
        else if(a[ale-1]==b[ble-1]){
            cout<<"YES"<<endl;
            cout<<"*"<<b[ble-1]<<endl;
        }
   else{
    int r=0;
        for(int j=0;j<ale-1;j++){
            for(int k=0;k<ble-1;k++){
                if(a.substr(j,2)==b.substr(k,2)){
                    r=j;
                    p=-1;
                    break;
                }
            }
        }
        if(p==-1){
            cout<<"YES"<<endl;
            cout<<"*"<<a.substr(r,2)<<"*"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
    }
}