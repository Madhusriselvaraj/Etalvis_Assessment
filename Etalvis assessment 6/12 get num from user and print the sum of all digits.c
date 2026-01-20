#include<stdio.h>
int main()
{
    int a,sum=0,temp;
    scanf("%d",&a);
    while(a!=0)
    {
      temp=a;
      temp=a%10;
      sum+=temp;
      a/=10;
    }
    printf("%d",sum);
}