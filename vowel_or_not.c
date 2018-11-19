#include <stdio.h>
void main()  
{  
    char ch;  
    
    printf("Input any alphabet : ");  
    scanf("%c", &ch);  
  
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' 

|| ch=='U')  
    {  
        printf("Vowel\n");  
    }  
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))  
    {  
        printf("Consonant\n");  
    }  
    else  
    {  
        printf("invalid\n");  
    }   
}
