#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int ar[n+3];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    int even=n/2;
    sum-=even;
    if(sum<=x)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}
