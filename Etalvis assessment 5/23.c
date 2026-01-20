#include<stdio.h>
int main()
{
    int a,flag=0,temp;
    scanf("%d",&a);
    while(a>0)
    {   temp=a%10;
        if(temp>=0&&temp<=9&&temp==0||temp==1||temp==4||temp==9)
        {
            flag++;
        }
        a/=10;    

    }
    printf("%d",flag);
}