#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    scanf("%d",&a);
    b=a/1000;
    c=(a%1000)/100;
    d=((a%1000)%100)%10;
    e=((a%1000)%100)/10;
    sum=c*1000+b*100+e*10+d;
    printf("%d",sum);

}