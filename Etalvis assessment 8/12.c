#include <stdio.h>
int   disp_total_odd_2digit(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y =   disp_total_odd_2digit(x);
    printf("%d", y);
    return 0;
}

int disp_total_odd_2digit(int a)
{
   
    int  last, second_last, two_digit, count = 0;

    while (a >= 10)
    {
        last = a % 10;
        second_last = (_ARGMAX / 10) % 10;

        two_digit = second_last * 10 + last;

        if (two_digit % 2 != 0)
        {
            count++;
        }

        a= a / 10;
    }

    return count;
}




    
   

