#include<stdio.h>
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if((num>=0) && (num%2==0))
    printf("Even");
    else if((num>=0) && (num%2!=0))
    printf("Odd");
    else
    printf("Invalid");
}

