#include <stdio.h>

void count_total_digits()
{
    int a,count=0,temp;
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        count++;
        temp/=10;
    } 
    printf("%d\n",count);
}
int main()
{
    count_total_digits();
}
