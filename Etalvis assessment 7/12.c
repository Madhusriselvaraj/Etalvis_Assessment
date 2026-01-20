#include <stdio.h>

void disp_sum_all_digits()
{
    int a,sum=0,temp;
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        sum+=temp;
        a/=10;
    } 
    printf("%d\n",sum);
}
int main()
{
    disp_sum_all_digits();
}
