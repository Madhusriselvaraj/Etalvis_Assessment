#include<stdio.h>>
void disp_count_sum14()
{
    int count=0,b,sum;
    for(int i=1;i<100000;i++)
    { 
        sum=0;
        for(b=i;b>0;b=b/10)
        {
            sum=sum+(b%10);
        }
        if(sum==14)
        {
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    disp_count_sum14();
}