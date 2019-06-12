#include<stdio.h>

int main(void)
{
    int x,y,z;
    scanf("%d %d  %d",&x,&y,&z);
    if(x == y && x==z)
    {
    printf("All Same");
    }
    else if (x == y && x != z)
    {
    printf("Neither");
    }
    else if (x == z && y != z)
    {
    printf("Neither");
    }
    else if (y == z && x != z)
    {
    printf("Neither");
    }
    else
    {
    printf("All Different");  
    }
    
    return 0;
}