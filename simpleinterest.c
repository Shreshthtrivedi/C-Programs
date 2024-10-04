#include<stdio.h>
int main()
{
    int P,R,T,SI,A;
    printf("Enter principle amount\n");
    scanf("%d",&P);
    printf("Enter Rate%\n");
    scanf("%d",&R);
    printf("Enter Time in Year\n");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("Simple interest=%d\n",SI);
    A=SI+P;
    printf("Amount=%d",A);
    return 0;
}