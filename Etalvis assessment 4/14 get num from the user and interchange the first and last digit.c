#include<stdio.h>
int main()
{
    int a,digit=0,last,power=1,first,temp;
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        digit++;
        temp=temp/10;
    }
    last=a%10;
    for(int i=1;i<digit;i++)
    {
        power*=10;
    }
    first=a/power;
    a=last*power+(a%power)/10*10+first;
    printf("%d",a);
}