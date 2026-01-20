#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    sum=b+c+d;
    printf("%d",sum);
}
