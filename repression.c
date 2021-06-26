#include<stdio.h>
int main()
{
    int A,B,C,sum1=0,sum2=0,sum3=0;
    scanf("%d %d %d",&A,&B,&C);
    sum1 = A+B;
    sum2 = A + C;
    sum3 = B+C;
    if(sum1>sum2 && sum1 > sum3)
    {
        printf("%d\n",sum1);
    }
    else if(sum2>sum1 && sum2>sum3)
    {
        printf("%d\n",sum2);
    }
    else
    {
        printf("%d\n",sum3);
    }
    return 0;
}
