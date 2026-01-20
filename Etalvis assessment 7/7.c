#include <stdio.h>

void disp_2digit_odd_sum7(void)
{
    int i, sum, temp, b;

    for (i = 10; i <= 99; i++)
    {
        temp = i % 10;   
        b = i / 10;      
        sum = temp + b;

        if (i % 2 != 0 && sum == 7)
        {
            printf("%d\n", i);
        }
    }
}

int main(void)
{
    disp_2digit_odd_sum7();
    return 0;
}
