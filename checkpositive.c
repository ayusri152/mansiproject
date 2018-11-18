#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    printf("Positive");
    else if(a==0)
    printf("Zero");
    else
    printf("Negative");
}
