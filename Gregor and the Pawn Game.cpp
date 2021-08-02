#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll cnt=0;
        for(i=0; i<n; i++)
        {
            if(s2[i]=='1')
            {
                if(i==0 && s1[i]=='0')
                {
                    cnt++;
                    s1[i] = 3;
                    s2[i] = 0;
                }
                else if(i==0 && s1[i+1]=='1' && i+1<n)
                {
                    cnt++;
                    s1[i+1] = 3;
                    s2[i] = 0;
                }
                else if(i>0 && s1[i]=='0')
                {
                    cnt++;
                    s1[i] = 3;
                    s2[i] = 0;
                }
                else if(i>0 && s1[i-1]=='1')
                {
                    cnt++;
                    s1[i-1] = 3;
                    s2[i] = 0;
                }
                else if(i>0 && s1[i+1]=='1' && i+1<n)
                {
                    cnt++;
                    s1[i+1] = 3;
                    s2[i] = 0;
                }
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
