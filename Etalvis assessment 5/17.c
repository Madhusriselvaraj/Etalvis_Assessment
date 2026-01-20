#include<stdio.h>
int main()
{
    int a,flag=0,b,c,sum=0 ;
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            flag++;
        }
    }
    b=a/10;
    c=a%10;
    sum=b+c;
    if(flag>=1 && sum==14)
    {
        printf("Not Prime but sum of digits is 14");
    }
    else if(flag>=1 && sum!=14)
    {
                printf("Not Prime but sum of digits is not 14");

    }
    else if(flag==0 && sum==14)
    {
        printf("Prime and sum of digit is 14");
    }
    else if(flag==0 && sum!=14)
    {
        printf("Prime and sum of digit is not 14");
    }

}