#include <stdio.h>

void disp_2digit_ones5(void)
{
    int i, sum, temp, b;

    for (i = 10; i <= 99; i++)
    {
        temp = i % 10;   
        b = i / 10;    
        if (temp==5)
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
