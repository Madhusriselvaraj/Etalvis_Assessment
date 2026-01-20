#include <stdio.h>
int   disp_total_odddigit(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y =   disp_total_odddigit(x);
    printf("%d", y);
    return 0;
}

int disp_total_odddigit(int a)
{
   
    int b,count=0,temp;
    
    while(a!=0)
    {
        temp=a%10;
        if(temp%2!=0)
        {
           count++;
        }

        a/=10;
    }
   

    return count;
}




    
   

