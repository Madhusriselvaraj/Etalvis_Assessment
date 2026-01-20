#include<stdio.h>
void disp_single_digit_square()
{
    int a,count=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        temp=a%10;
        if(temp==4||temp==9||temp==0||temp==1)
        {
            count++;
        }
        a/=10;
    }
    printf("%d",count);
}
int main()
{
    disp_single_digit_square();
}