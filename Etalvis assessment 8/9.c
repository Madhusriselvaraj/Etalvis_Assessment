#include <stdio.h>
int check_last_digitodd(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = check_last_digitodd(x);
    printf("%d", y);
    return 0;
}

int check_last_digitodd(int a)

{
    int count=0,last,pow=1,first,rev,c,temp,d;
   
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
    return rev;
}



    
   

