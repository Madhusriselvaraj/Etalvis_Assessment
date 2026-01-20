#include <stdio.h>

int disp_2digit_ones5(int);

int main()
{
    int x = 0, y;
    y = disp_2digit_ones5(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_ones5(int a)
{
    int i, sum = 0;

    for(i = 10; i <= 99; i++)
    {
        if(i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    return sum;
}
