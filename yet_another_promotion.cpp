#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define int long long int

void solve(){
	int one, two, kilos, promo;
	cin>>one>>two>>kilos>>promo;

	int ans(0);

	if(kilos>promo)
	{
		if(one*promo < two*(promo+1))
		{
			ans += (kilos/(promo+1))*promo * one;

			ans += (kilos%(promo+1)) * min(one,two);
		}
		else{
			ans = kilos*min(one,two);
		}


	}
	else{
		ans = kilos*min(one,two);
	}


	cout<<ans<<"\n";

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