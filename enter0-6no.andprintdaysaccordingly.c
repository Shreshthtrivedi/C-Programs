#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x==0)
    {
        printf("MONDAY");
    }
    else if(x==1)
    {
        printf("TUESDAY");

    }
    else if(x==2)
    {
        printf("WEDNESDAY");
    }
    else if(x==3)
    {
        printf("THURSDAY");

    }
    else if(x==4)
    {
        printf("FRIDAY");

    }
    else if(x==5)
    {
        printf("SATURDAY");
    }
    else if(x==6)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("WRONG INPUT");
    }
    return 0;
}