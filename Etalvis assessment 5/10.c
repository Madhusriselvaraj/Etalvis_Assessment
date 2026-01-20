#include<stdio.h>
int main()
{
    int sum=0,b;
    for(int i=70;i<=80;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }

    }
    printf("%d",sum);
}