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

		int ans(0);

		for(int i=0;i<str.size()-2;i++)
		{
			string temp = str.substr(i,3);

			if(temp[0]==temp[2])
				ans++;
		}
		cout<<ans+1<<"\n";

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