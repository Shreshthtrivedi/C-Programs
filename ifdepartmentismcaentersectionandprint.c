#include<stdio.h>
int main()
{
    char x,y,z;
    int s;
    printf("Enter your stream:for computer science- s or for commerce- c\n");
    scanf("%c",&x);
    if(x=='s'||x=='S')
    {
        printf("You belongs to 'Computer Science'\n");
        printf("Enter your Department:for Mca-m or M/Bca-b or B\n");
        scanf(" %c",&z);
        if(z=='m'||z=='M')
     {
        printf("You belongs to 'Mca'\n");
        printf("Enter your section\n");
        scanf(" %c%d",&y,&s);
        printf("You belongs to Mca & your class is %c%d",y,s);
     }
     
     else
     {
        printf("You belongs to 'Bca'\n");
         printf("Enter your section\n");
         scanf(" %c%d",&y,&s);
         printf("You belongs to Bca and your class is=%c%d",y,s);
     }
    }
    else
    {
        printf("You belongs to 'Commerce' stream!!");
    }
    
    return 0;
}