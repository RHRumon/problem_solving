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
        ll i ,arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll high=-10000000000LL;
        int mxInd = -1;
        for(i=0;i<n;i++)
        {
            if(arr[i]>high)
            {
                high = arr[i];
                mxInd = i;
            }
        }
        ll sum=0,cnt=0;
        for(i=0;i<n;i++)
        {
            if(i==mxInd)
            {
                continue;
            }
            else
            {
                cnt+=arr[i];
            }
        }

        cerr << cnt << ' ' << endl;

        double avg = (1.0*cnt)/(n-1);
        ///std::cout << std::fixed << std::setprecision(9) << avg <<endl;
        double total_avg = avg + high;
        std::cout << std::fixed << std::setprecision(9) << total_avg <<endl;

    }
    return 0;
}
