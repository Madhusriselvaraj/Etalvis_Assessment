#include <stdio.h>

void disp_reverse_digits()
{
    int a,sum=0,temp;
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        sum=sum*10+temp;
        a/=10;
    } 
    printf("%d\n",sum);
}
int main()
{
    disp_reverse_digits();
}
