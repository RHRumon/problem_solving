#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v1(4),v2(4);
    int i;
    v1 = {"H","2B","3B","HR"};
    for(i=0;i<4;i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1==v2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
