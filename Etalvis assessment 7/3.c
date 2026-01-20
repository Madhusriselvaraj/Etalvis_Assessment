#include <stdio.h>

void disp_sum()
{
    int i,sum=0;
    for(i = 5; i >=1; i--)
    {
        sum+=i;
    }
    printf("%d\n", sum);
}

int main()
{
    disp_sum();
    return 0;
}
