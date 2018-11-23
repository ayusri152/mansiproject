#include<stdio.h>
void main()
{
    int num,org,rev=0,r;
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
    }
    if(org==rev)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
