#include<stdio.h>
int main()
{
    int a,b,c,d,sum,h,k;
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=(a%100)%10;
    sum=b+c+d;
    if(sum>10)
    { 
        h=sum/10;
        k=sum%10;
        printf("%d",h+k);
        
    }
    else
    {printf("%d",sum);}
     
}