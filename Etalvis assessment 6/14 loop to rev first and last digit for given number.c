#include<stdio.h>
int main()
{
    int a,count=0,last,pow=1,first,rev,c,temp;
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
      count++;
      temp/=10;
    }
    while(count>1)
    {
        pow*=10;
        count--;
    }
    last=a%10;
    first=a/pow;
    c=(a%pow)/10;
    rev=last*pow+c*10+first;
    printf("%d",rev);
}
