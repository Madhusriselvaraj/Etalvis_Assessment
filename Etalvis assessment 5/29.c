#include<stdio.h>
int main()
{
    int a,b,max,lcm,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    max=(a>b&&a>c)?a:(b>c)?b:c;
    for(lcm=max;;lcm++)
    {
        if(lcm%a==0&&lcm%b==0&&lcm%c==0)
        {
            break;
        }
    }
    printf("%d",lcm);
}