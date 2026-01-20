#include<stdio.h>
int main()
{
    int a,b,c,sum,h;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    sum=b+c;
    h=a-5*(sum%2);
    printf("%d",h);
}