#include <stdio.h>

int disp_singledigit_squarenumber(int);

int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_singledigit_squarenumber(x);
    printf("%d", y);
    return 0;
}

int disp_singledigit_squarenumber(int a)
{
    int t, count = 0;

    while (a != 0)
    {
        t = a % 10;
        if (t == 0 || t == 1 || t == 4 || t == 9)
        {
            count++;
        }
        a = a / 10;
    }
    return count;
}
