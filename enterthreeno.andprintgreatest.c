#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three number\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("Greatest no.=%d",x);
    }
    else if(y>x&&y>z)
    {
        printf("Greatest no.=%d",y);
    }
    else
    {

        printf("Greatest no.=%d",z);
    }
}