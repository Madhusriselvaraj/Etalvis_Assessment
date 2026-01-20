#include <stdio.h>
int disp_rev_number(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_rev_number(x);
    printf("%d", y);
    return 0;
}

int disp_rev_number(int a)
{
    int count=0,last,pow=1,first,rev,c,temp;
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
   return rev;
}




    
   

