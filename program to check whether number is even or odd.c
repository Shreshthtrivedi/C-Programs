#include<stdio.h>
int main()
{
    int x;
    printf("ENTER A NUMBER TO CHECK EVEN NUMBER\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    return 0;
}