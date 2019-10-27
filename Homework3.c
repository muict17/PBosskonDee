#include <stdio.h>
int main()
{
    int shot,longg,sum=0;
    scanf("%d %d",&shot,&longg);
    if(shot>=longg)
    {
        sum=shot-longg;
    }
    else
    {
        sum=longg-shot;
    }
    sum=sum*30;
    printf("%d",sum);
    return 0;
}