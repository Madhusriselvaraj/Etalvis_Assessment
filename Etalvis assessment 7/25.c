#include<stdio.h>
void disp_single_digitprime()
{
    int a,count=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        temp=a%10;
        if(temp==2||temp==3||temp==5||temp==7)
        {
            count++;
        }
        a/=10;
    }
    printf("%d",count);
}
int main()
{
     disp_single_digitprime();
}