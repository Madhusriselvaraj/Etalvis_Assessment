#include<stdio.h>
int main()
{
    int i,b,c,sum;
    for(i=11;i<=100;i++)
    {
        if(i%2!=0){
            b=i/10;
            c=i%10;
            sum=b+c;
            if(sum==7){
                printf("\n %d",i);
            }

        }
    }
}