#include<stdio.h>

int main(void)
{
    char a,b;
    int c;
    printf("single (s) or married (m) please write 1 letter (s/m) : ");
    scanf(" %c",&a);
    if (a == 's')
    {
        printf("Did you have any boy/girl friend? (y/n) : ");
        scanf(" %c",&b);
        if(b == 'y')
        {
        printf("You are not alone.\n");    
        }
        else if (b == 'n')
        {
        printf("Let me hug you. \n");   
        }
    }
    else if (a == 'm')
    {
    printf("how many kids does he/she has (number) : ");
    scanf("%d",&c);
    if (c == 0)
    {
    printf("You can ask me for advices \n");
    }
    else if (c >=1)
    {
    printf("GG \n");  
    }
    else
    {
        printf("error\n");
    }
    
    }
    else
    {
    printf("Invalid marital status \n");
    }
    printf("Thank you for your information");
    return 0;
}