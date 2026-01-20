#include <stdio.h>
int disp_sum(int);
int main()
{
    int x = 5, y;
    y = disp_sum(x);
    printf("%d", y);
    return 0;
}

int disp_sum(int a)
{
    int i, sum = 0;
    for(i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    return sum;
}
