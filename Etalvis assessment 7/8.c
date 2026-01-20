#include <stdio.h>

void disp_2digit_even_sum6()
{
    int i, sum, temp, b;

    for (i = 10; i <= 99; i++)
    {
        temp = i % 10;   
        b = i / 10;      
        sum = temp + b;

        if (i % 2== 0 && sum == 6)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    disp_2digit_even_sum6();
    return 0;
}
