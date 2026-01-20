#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=(a%100)%10;
    d=b*100+c;
    printf("%d",d);
}