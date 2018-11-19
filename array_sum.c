#include<stdio.h>
void main()
{
 int n,k,arr[10],i;
 int sum=0;
 printf("enter the value of n and k");
 scanf("%d%d",&n,&k);
 printf("enter the values of the array");
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<k;i++)
 {
     sum=sum+arr[i];
 }
 printf("%d",sum);
 
}
