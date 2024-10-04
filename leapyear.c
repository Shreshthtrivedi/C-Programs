#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year\n");
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("NOT a Leap Year");
    }
    return 0;
}