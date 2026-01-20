#include <stdio.h>

int disp_count_sum14(int);

int main()
{
    int x=1, y;
    y = disp_count_sum14(x);
    printf("%d", y);
    return 0;
}

int disp_count_sum14(int a)
{
    int  temp, digit, sum, count = 0;

    while (a < 100000)
    {
        temp = a;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }

        a++;
    }
    return count;

}
