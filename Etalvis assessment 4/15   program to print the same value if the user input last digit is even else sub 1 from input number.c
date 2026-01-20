#include<stdio.h>
int main()
{
    int a,last,temp,digit=0,power=1,first,num,b;
    scanf("%d",&a);
    last=a%10;
    temp=a;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    last=a%10;
    for(int i=1;i<digit;i++)
    {
        power*=10;
    }
    first=a/power;
    if(last%2==0)
    {
        printf("%d",a);
    }
    else
    {
        b=first-1;
        num=b*power+(a%power)/10*10+last;
        printf("%d",num);
    }

}