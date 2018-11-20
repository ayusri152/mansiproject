#include <stdio.h>
#include <math.h>
int main()
{
    int num,p,c;
    printf("enter the number and power");
    scanf("%d%d",&num,&p);
    
    c=pow(num,p);
    printf("%d",c);
    return 0;
}
