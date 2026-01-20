#include <stdio.h>

void disp_odd()
{
    int i,sum=0;
    for(i = 10; i<=20; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    
}

int main()
{
    disp_odd();
    return 0;
}
