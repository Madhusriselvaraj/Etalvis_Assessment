#include<stdio.h>
int main()
{
    int a=70,sum=0;
    while(a<80)
    {
      if(a%2!=0)
        sum+=a;
        a++;
    }
    printf("%d",sum);
}