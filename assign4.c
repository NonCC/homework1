#include<stdio.h>

int main(void)
{
    float x,y;
    float z;
    char a;
    scanf("%f %f %c",&x,&y,&a);
    if(a == '+')
    {
    z=x+y;
    printf("%.2f",z);
    }
    else if (a == '-')
    {
    z=x-y;
    printf("%.2f",z);
    }
    else if (a == '*')
    {
    z=x*y;
    printf("%.2f",z);
    }
    else if (a == '/')
    {
    z=x/y; 
    printf("%.2f",z); 
    }
    
    return 0;
}