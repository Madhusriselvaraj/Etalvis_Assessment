#include<stdio.h>
int main()
{
    int flag=0,count=0;
    for(int j=1;j<=10;j++){
    for(int i=2;i*i<j;i++)
    {
        if(j%i==0)
        {
            flag++;
        }
        else
        {
           count++;
        }
    }
}
    printf("%d",count);
    
}