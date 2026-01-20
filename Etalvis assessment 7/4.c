#include <stdio.h>

void disp_rsum()
{
    int i,sum=0;
    for(i = 6; i >=1; i--)
    {
        sum+=i;
    }
    printf("%d\n", sum);
}

int main()
{
    disp_rsum();
    return 0;
}
