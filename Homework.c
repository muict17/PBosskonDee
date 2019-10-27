#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n],c=0,d=1,e=0;
    for(i=0;i<n;i++)
    {
        b[i]=1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i]=b[i]*a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        c=c+b[i];
    }
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            a[i]=a[i]*d;
        }
        else
        {
            d=d*10;
            a[i]=a[i]*d;
        }
    }
    for(i=0;i<n;i++)
    {
        e=e+a[i];
    }
printf("%d \n",e);
printf("%d \n",c);
    if(e==c)
    {
        printf("Arm Strong Number");
    }
    else
    {
        printf("Not Arm Strong Number");
    }
    
    return 0;
}