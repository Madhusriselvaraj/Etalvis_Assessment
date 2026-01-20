#include <stdio.h>

int main()
{
    int num, last, second_last, t, count = 0;

    scanf("%d", &num);

    while (num >= 10)
    {
        last = num % 10;
        second_last = (num / 10) % 10;

        t= second_last * 10 + last;

        if (t==16||t==25||t==36||t==49||t==64||t==81)
        {
            count++;
        }

        num = num / 10;
    }

    printf("%d", count);

}
