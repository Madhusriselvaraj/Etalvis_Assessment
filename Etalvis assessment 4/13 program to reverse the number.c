#include<stdio.h>
int main()
{
    int a,rev=0,digit;
    scanf("%d",&a);
    while(a!=0)
    {
        digit=a%10;
        rev=rev*10+digit;
        a/=10;
    }
    printf("%d",rev);

}