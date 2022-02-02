#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        double x = (p+q+r)/2;
        if(p>q && p>r)
        {
            double sum = double (b+c+p);
            if(sum>x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(q>p && q>r)
        {
            double sum = double (a+c+q);
            if(sum>x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            double sum =double (a+b+r);
            if(sum>x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
