#include <stdio.h>
int main()
{
    int n,i,sum=0,g=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=i*i*i;
        if(sum==n)
        {
            printf("True");
            g++;
            break;
        }
        else if(n==1)
        {
            printf("True");
            g++;
            break;
        }
    }
    if(n==0)
    {
        printf("True");
    }
    else if(g!=1)
    {
        printf("False");
    }
    
    return 0;
}