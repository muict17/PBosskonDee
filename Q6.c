#include <stdio.h>
int main()
{
    int n,i,base10,count=1;
    scanf("%d",&base10);
    int arr[99];
    for(i=0;i<99;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<99;i++)
    {
        if(base10==1)
        {
            arr[i]=base10%2;
            arr[i+1]=base10;
            break;
        }
        else
        {
            arr[i]=base10%2;
            base10=base10/2;
            count++;
        }
    }
    for (i = count-1; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}