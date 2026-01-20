#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if(c>b||c==b){
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}