#include<stdio.h>
int main()
{
    int a,flag=0,temp ;
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {   temp=a%10;
        if(temp%2!=0)
        {
            flag++;
        }
        a/=10;    

    }
    printf("%d",flag);
}