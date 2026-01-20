#include <stdio.h>

int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x = 0, y;
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_odd_sum_tens7(int a)
{
    int i, sum = 0;

    for(i = 70; i <= 80; i++)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
