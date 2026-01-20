#include<stdio.h>
int main()
{
    int a,temp,digit=0;
    scanf("%d",&a);
    temp=a;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    printf("%d",digit);

}