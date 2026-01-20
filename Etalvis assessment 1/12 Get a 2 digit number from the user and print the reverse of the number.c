#include<stdio.h>
int main()
{
    int a,b,c,rev;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    rev=c*10+b;
    printf("%d",rev);
}
