#include<stdio.h>
int main()
{
    float a,b;
    float c;
    scanf("%f %f",&a,&b);
    c = ((a-b)/3)+b;
    printf("%0.7f\n",c);
    return 0;
}
