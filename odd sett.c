#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,cnt=0;
        scanf("%d",&n);
        int a[2*n+10];
        for(i=0;i<2*n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)
            {
                cnt++;
            }
        }
        if(cnt==(2*n)/2)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }
    return 0;
}
