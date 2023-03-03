#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


   

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && __gcd(arr[i],arr[j])<=2)
            {
                cout<<"YES\n";
                return ;
            }
        }
    }
    cout<<"NO\n";

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