#include<bits/stdc++.h>
using namespace std;
int func(int s,int t)
{
    int i,j,k,ans=0;
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=100;j++)
        {
            for(k=0;k<=100;k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}
int main()
{
    int s,t;
    cin>>s>>t;
    int ans1 = func(s,t);
    cout<<ans1<<endl;
    return 0;
}
