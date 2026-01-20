#include <stdio.h>

int disp_2digit_squarenumber(int);

int main()
{
    int x , y;
    scanf("%d",&x);
    y = disp_2digit_squarenumber(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_squarenumber(int a)
{
    int  last, second_last, t, count = 0;

    while (a >= 10)
    {
        last = a % 10;
        second_last = (a/ 10) % 10;

        t= second_last * 10 + last;

        if (t==16||t==25||t==36||t==49||t==64||t==81)
        {
            count++;
        }

        a = a / 10;
    }

   return count;
}


