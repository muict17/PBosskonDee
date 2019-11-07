#include <stdio.h>
int main()
{
    int n,base8,digits,i=0,j=0;
    scanf("%d",&n);
    int a[n*3];
    for(i=0;i<n*3;i++)
    {
        scanf("%d",a[i]);
    }
    while(i<n*3)
    {
        digits=3;
        base8=0;
        while(j<3)
        {
            if(digits==3)
            {
                base8+=(a[i]*4);
            }
            else if(digits==2)
            {
                base8+=(a[i]*2);
            }
            else if(digits==1)
            {
                base8+=(a[i]*1);
            }
            digits--;
            i++;
            j++;
        }
        printf("%d",base8);
    }
    return 0;
}
//1 0 0 1
//3 2 1 0