#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,temp=0,temp1=0;
        scanf("%d",&n);
        int arr[n];
        for(i=1;i<=n;i++)
        {
            arr[i] = i;
        }
        if(n%2==0)
        {
            for(i=1;i<=n;i+=2)
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        else{
            for(i=1;i<=n-3;i+=2)
            {
                temp1 = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp1;
            }
           int x = arr[n-2],y = arr[n-1],z = arr[n];
           arr[n-1] = x;
           arr[n] = y;
           arr[n-2] = z;

        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
