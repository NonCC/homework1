#include<stdio.h>

int main(void)
{

    char a,x;
    scanf(" %c",&a);
    if(a >=65 && a<89)
    {
    x=a+32;
    printf(" %c",x);
    }
    else if (a >=97 && a<121)
    {
    x=a-32;
    printf(" %c",x);
    }
    else
    {
    printf(" ");
    }
    
    return 0;
}