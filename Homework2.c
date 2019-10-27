#include <stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",arr[i][j]);
            }
        }
        else
        {
            for(j=m-1;j>=0;j--)
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}