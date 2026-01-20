#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=(a%100)/10;
    c=(a%100)%10;
    if(c==b){
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}