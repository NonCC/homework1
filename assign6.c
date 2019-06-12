#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && b>=c)
    {
    printf("Max : %d , Min : %d",a,c);
    }
    else if (a>=c && c>=b)
    {
    printf("Max : %d , Min : %d",a,b) ;
    }
    else if (b>=a && a>=c)
    {
    printf("Max : %d , Min : %d",b,c);
    }
    else if (b>=c && c>=a)
    {
    printf("Max : %d , Min : %d",b,a);
    }
    else if (c>=a && a>=b)
    {
    printf("Max : %d , Min : %d",c,b);
    }
    else if (c>=b && b>=a)
    {
    printf("Max : %d , Min : %d",c,a);
    }
    else
    {
        printf("error");
    }
    
    return 0;
}
