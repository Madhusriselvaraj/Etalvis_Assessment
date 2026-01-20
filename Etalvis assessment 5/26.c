#include<stdio.h>
int main()
{
    for(int i=9999;i>=1000;i--)
    {
        if(i%63==0)
        {   
            printf("%d",i);
            break;

        }
    }
}