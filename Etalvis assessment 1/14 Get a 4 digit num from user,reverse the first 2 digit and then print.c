#include<stdio.h>
int main()
{
    int a,b,c,d,e,r,h,rev;
    printf("Enter a number:");
    scanf("%d",&a);
    h=a/1000;
    r=(a/100)%10;
    b=a%1000;
    c=b%100;
    d=c/10;
    e=c%10;
    rev=h*1000+r*100+e*10+d;
    printf("%d",rev);
}
