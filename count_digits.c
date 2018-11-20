#include<stdio.h>
void main()
{
    int num;
    int count=0;
    printf("enter the number");
    scanf("%d",&num);

     while(num!=0)
    {
      num /=10;
      ++count;
    }
   
    printf("%d",count);
}


