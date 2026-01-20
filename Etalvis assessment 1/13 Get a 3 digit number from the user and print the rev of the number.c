#include<stdio.h>
int main()
{
    int a,b,c,d,rev;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    rev=d*100+c*10+b;
    printf("%d",rev);
}
