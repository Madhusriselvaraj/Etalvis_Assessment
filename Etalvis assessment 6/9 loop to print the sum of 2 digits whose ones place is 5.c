#include<stdio.h>
int main()
{
    int a=11,b,c,sum=0;
    while(a<=100)
    {
        b=a/10;
        c=a%10;
      if(c==5)
      {
        sum+=a;
      }
        a++;
    }
    printf("%d",sum);
}