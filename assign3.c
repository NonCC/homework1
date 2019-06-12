#include<stdio.h>

int main(void)
{
    int x,y;
    scanf("%d",&x);
    if(x<15000)
    {
    y=0.1*x  ;
    printf("%d",y);  
    }
    else
    {
    y=0.15*x ;
    printf("%d",y); 
    }
    return 0;
}