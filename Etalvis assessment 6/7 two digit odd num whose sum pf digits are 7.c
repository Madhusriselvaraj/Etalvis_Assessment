#include<stdio.h>
int main()
{
    int a=11,b,c,sum=0;
    while(a<=100)
    {
        b=a/10;
        c=a%10;
        sum=b+c;
      if(a%2!=0 && sum==7)
       printf("\n %d",a);
        a++;
    }
}