#include <stdio.h>

int main()
{
    int num, last, second_last, two_digit, count = 0;

    scanf("%d", &num);

    while (num >= 10)
    {
        last = num % 10;
        second_last = (num / 10) % 10;

        two_digit = second_last * 10 + last;

        if (two_digit % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    printf("%d", count);
}
