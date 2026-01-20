#include<stdio.h>
int main()
{
    long int a;
    int flag=0,temp;
    scanf("%ld",&a);
    while(a>=10)
    {   temp=a%100;
        if(temp%2!=0)
        {
            flag++;
        }
        a/=10;    

    }
    printf("%d",flag);
}