#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    int a,ci;
    printf("Enter principle amount\n");
    scanf("%f",&p);
    printf("Enter rate%\n");
    scanf("%f",&r);
    printf("Enter time in year\n");
    scanf("%f",&t);
    a=p*pow(1+(r/100),t);
    ci=a-p;
    printf("amount=%d\n",a);
    printf("compound interest=%d",ci);
    return 0;
}