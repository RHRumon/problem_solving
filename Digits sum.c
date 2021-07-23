#include<stdio.h>

int S(int x)
{
    int sum = 0;
    while(x > 0)
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,cnt=0,i,rem=0,sum=0;
        scanf("%lld",&n);
        for(i = 1; i <= n; i++)
        {
            if(S(i) > S(i + 1))
            {
                cnt++;
            }
        }
        printf("%lld\n", cnt);
    }
}
