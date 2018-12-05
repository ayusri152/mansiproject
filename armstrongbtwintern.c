#include<stdio.h>
void main()
{
    int start,end,sum,r,i,temp;
    printf("enter the interval");
    scanf("%d%d",&start,&end);
    for(i=start+1;i<end;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum+=r*r*r;
            temp/=10;
        }
        if(i==sum)
        {
            printf("%d",i);
        }
    }
}
