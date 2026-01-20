#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f;
    scanf("%d",&a);
    b=(a/1000);
    c=(a%1000)/100;
    d=(a%1000)%100/10;
    e=(a%1000)%100%10;
    f=b*10+c;
    g=d*10+e;
    if(f==g)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}