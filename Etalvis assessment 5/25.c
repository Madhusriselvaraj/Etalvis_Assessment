#include<stdio.h>
int main()
{
    int a,flag=0,temp ;
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {   temp=a%10;
        if(temp>0&&temp<=9&&temp==2||temp==3||temp==5||temp==7)
        {
            flag++;
        }
        a/=10;    
    }
    printf("%d",flag);
}