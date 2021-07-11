#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ax,ay,bx,by,fx,fy,r=0, min, max;

        scanf("%d %d",&ax,&ay);
        scanf("%d %d",&bx,&by);
        scanf("%d %d",&fx,&fy);

        r = abs(ax - bx) + abs(ay - by);

        if (ax == bx)
        {
            min = ay > by ? by : ay;
            max = ay > by ? ay : by;

            if (fx == ax && fy >= min && fy <= max)
            {
                r += 2;
            }
        }
        else if (ay == by)
        {
            min = ax > bx ? bx : ax;
            max = ax > bx ? ax : bx;

            if (fy == ay && fx >= min && fx <= max)
            {
                r += 2;
            }
        }

        printf("%d\n", r);
    }
}

