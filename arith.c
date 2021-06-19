#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        long long int sum=0,n,k=0;
        scanf("%lld",&n);
        long long int arr[n];

        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum = sum + arr[i];
        }
        k = sum - n;
        if(sum<n)
        {
            printf("1\n");
        }
        else if(sum==n)
        {
            printf("0\n");
        }
        else
            {
            printf("%lld\n",k);
        }

    }
    return 0;
}
