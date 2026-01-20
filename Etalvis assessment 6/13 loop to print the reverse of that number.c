#include<stdio.h>
int main()
{
    int a,rev=0,temp;
    scanf("%d",&a);
    while(a!=0)
    {
      temp=a;
      temp=a%10;
      rev=rev*10+temp;
      a/=10;
    }
    printf("%d",rev);
}