#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int cnt=0,sum=0,i=1,n;
        scanf("%d",&n);
        while(sum<n)
        {
            cnt++;
            sum = sum+i;
            i+=2;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
