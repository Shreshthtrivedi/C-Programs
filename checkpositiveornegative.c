#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}