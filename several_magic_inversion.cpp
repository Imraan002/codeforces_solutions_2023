#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n;
	cin>>n;

	string str;
	cin>>str;

	string a,b;


	if(n&1)
	{
		a = str.substr(0,n/2);
		b = str.substr(n/2+1);
	}
	else{
		a = str.substr(0,n/2);
		b = str.substr(n/2);
	}

	vector<int> st;

	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=b[a.size()-1-i])
		{
			st.push_back(i);
		}
	}
	
	if(st.size()==0)
	{
		cout<<"YES\n";
		return;
	}
	for(int i=0;i<st.size()-1;i++)
	{
		if(st[i+1]-st[i] > 1)
		{
			cout<<"NO\n";
			return ;
		}
	}
	cout<<"YES\n";



}



signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);              //Imraan
    #endif

        fast_io;
        int t;
        cin>>t;
        
    while(t--)
    {
        
        solve();    

    }


    return 0;
}