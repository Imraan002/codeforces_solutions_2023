#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n;
	cin>>n;

	string s1;
	cin>>s1;

	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

//	cout<<s1<<" ";
	string temp = "";

	temp += s1[0];
	
	for(int i=1;i<s1.size();i++)
	{
		if(s1[i]==s1[i-1])
			continue;
		else
			temp+=s1[i];	
	}

	if(s1=="meow" || temp=="meow")
		cout<<"yes\n";
	else
		cout<<"no\n";

	

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