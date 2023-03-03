#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)

void solve(){

	int n,k;
	cin>>n>>k;

	string str;
	cin>>str;


	int a[26]={0},b[26]={0};

	int cnt(0);

	int extra(0);

	for(int i=0;i<n;i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			a[str[i]-'a']++;
		}
		else{
			b[str[i]-'A']++;
		}
	}

	for(int i=0;i<26;i++)
	{
		cnt += min(a[i],b[i]);

		int temp = abs(a[i]-b[i]);

		extra += temp/2;
	}

	cnt += min(extra,k);

	cout<<cnt<<"\n";


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