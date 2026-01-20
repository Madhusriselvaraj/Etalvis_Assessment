#include<stdio.h>
void check_last_digitodd()
{
    int a,count=0,last,pow=1,first,rev,c,temp,d;
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
    rev=a;
    while(last%2!=0)
    {
        d=first-1;
        rev=d*pow+c*10+last;
        break;
    }
    printf("%d",rev);

}

int main()
{
    check_last_digitodd();
}
