#include<stdio.h>
int main()
{
    int N,A[2000],x=0,i;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);

    }
    for(i=0;i<N;i++)
    {
        if(A[i]>10)
        {
            x += (A[i]-10);
        }
    }
    printf("%d\n",x);
    return 0;

}
