#include<stdio.h>
int main()
{
    int a,flag=0,temp;
    scanf("%d",&a);
    while(a>0)
    {   temp=a%100;
        if(temp>=10&&temp<=99&&temp==16||temp==25||temp==36||temp==49||temp==64||temp==81)
        {
            flag++;
        }
        a/=10;    

    }
    printf("%d",flag);
}