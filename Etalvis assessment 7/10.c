#include <stdio.h>

void disp_2digit_ones5(void)
{
    int i, sum, temp, b;

    for (i = 70; i <= 80; i++)
    {   
        if (i%2!=0)
        {
            sum+=i;
            
        }
    }
    printf("%d\n", sum);
}
int main(void)
{
    disp_2digit_ones5();
    return 0;
}
