#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            printf("Hello\n");
        }
    }
    else
    {
        printf("");
    }
}
