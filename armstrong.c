#include<stdio.h>
void main()
{
    int num,r,sum=0;
    int org;
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(org==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
