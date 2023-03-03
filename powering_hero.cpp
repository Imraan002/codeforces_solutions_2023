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

    for(auto &x:arr)
    {
        cin>>x;
    }

    int ans(0);

    priority_queue<int> pq;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
           if(pq.empty()) continue;
           
           ans += pq.top();
           pq.pop();
        }
        else{
            pq.push(arr[i]);
        }
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