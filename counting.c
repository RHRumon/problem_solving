#include<stdio.h>
int main()
{
    int A,B,cnt=0,i;
    scanf("%d %d",&A,&B);
    if(A>B)
    {
        printf("0\n");
    }
    else
    {
        for(i=A;i<=B;i++)
        {
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

