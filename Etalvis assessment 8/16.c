#include <stdio.h>

int disp_biggest_4digitnum(int a);

int main()
{
    int x=9999, y;

    y = disp_biggest_4digitnum(x);
    printf("%d", y);
    return 0;
}

int disp_biggest_4digitnum(int a)
{


    while (a>= 1000)
    {
        if (a % 7 == 0 && a% 9 == 0)
        {
           return a;
            break;
        }
        a--;
    }

    
}

