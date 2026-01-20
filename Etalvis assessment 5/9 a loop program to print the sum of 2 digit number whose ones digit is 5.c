#include<stdio.h>
int main()
{
    int sum=0,b;
    for(int i=10;i<=99;i++)
    {
        b=i%10;
        if(b==5)
        {
            sum+=i;
        }

    }
    printf("%d",sum);
}