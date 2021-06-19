#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s[100],i;
        for(i=1; i<=4; i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=1; i<=4; i++)
        {
            if(s[1]<s[2])
            {
                if(s[1]>s[3] && s[1]>s[4]||s[2]<s[3]&& s[2]<s[4])
                {
                    printf("NO\n");
                    break;
                }
                else{
                    printf("YES\n");
                    break;
                }

            }
            else if(s[1]>s[2])
            {
                if(s[2]>s[3] && s[2]>s[4]||s[1]<s[3]&&s[1]<s[4])
                {
                    printf("NO\n");
                    break;
                }
                else{
                    printf("YES\n");
                    break;
                }
            }


        }

    }
    return 0;
}
