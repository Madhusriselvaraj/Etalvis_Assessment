#include<stdio.h>
int main()
{
    int a,b,count=0,temp;
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        if(temp%2!=0)
        {
           count++;
        }

        a/=10;
    }
    printf("%d",count);
}