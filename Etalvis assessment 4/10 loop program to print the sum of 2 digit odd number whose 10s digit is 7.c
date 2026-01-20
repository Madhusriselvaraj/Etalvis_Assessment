#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=70;i<=80;i++)
    {
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d",sum);
}