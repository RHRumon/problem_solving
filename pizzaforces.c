#include<stdio.h>
#define ll long long
int main()
{
    ll t,val=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(n<=6)
        {
            printf("15\n");
            continue;
        }
        else
        {
            if(n%2==0)
            {
                val = n*(2.5);
                printf("%lld\n",val);
                continue;
            }
            else
            {
                n++;
                val = n*(2.5);
                printf("%lld\n",val);
                continue;
            }
        }
    }
    return 0;
}
