#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;
        int output[h+5][w+5],i,j;
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                output[i][j] = 0;
            }
        }
        for(i=0;i<w;i+=2)
        {
            output[0][i] = 1;
        }
        for(j=2;j<h;j+=2)
        {
            output[j][0] = 1;
            output[j][w-1] = 1;
        }
        for(i=2;i<w-2;i+=2)
        {
            output[h-1][i] = 1;
        }

        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                cout<<output[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
