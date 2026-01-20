#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("Return %d",c);
}