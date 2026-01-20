#include<stdio.h>
int main()
{
    int a,flag=0 ;
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            flag++;
        }
    }
    if(flag>=1)
    {
        printf("Not Prime");
    }
    if(flag==0)
    {
        printf("Prime");
    }
}