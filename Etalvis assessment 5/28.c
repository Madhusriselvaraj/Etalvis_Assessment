#include<stdio.h>
int main()
{
    int a,b,max,lcm;
    scanf("%d",&a);
    scanf("%d",&b);
    max=(a>b)?a:b;
    for(lcm=max;;lcm++)
    {
        if(lcm%a==0&&lcm%b==0)
        {
            break;
        }
    }
    printf("%d",lcm);
}