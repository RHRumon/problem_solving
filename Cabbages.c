#include<stdio.h>
int main()
{
    long long int n,a,x,y,total = 0,i,z=0;
    scanf("%lld %lld %lld %lld",&n,&a,&x,&y);

    while(n--)
    {
        z++;
        if(z<=a)
        {
            total+=x;
        }
        else
        {
             total+=y;
        }
    }
    printf("%lld\n",total);
    return 0;
}
