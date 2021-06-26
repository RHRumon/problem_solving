#include<stdio.h>
int main()
{
    long long int A,B,C,D,x=0,y=0;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);

    if(C*D<=B)
    {
        printf("-1\n");
    }
    else
    {

        x = D*C-B;
        y = (A+x-1)/x;
        printf("%lld\n",y);
    }
    return 0;

}
