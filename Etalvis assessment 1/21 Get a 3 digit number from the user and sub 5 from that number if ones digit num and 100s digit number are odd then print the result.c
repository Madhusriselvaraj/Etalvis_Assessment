#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a%100;
    c=a-5*(b%2);
    printf("%d",c);
}