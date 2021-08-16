#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll ans=arr[0];
        for(i=1;i<n;i++)
        {
            ans = ans & arr[i];
        }
        cout<<ans<<endl;

    }
}
