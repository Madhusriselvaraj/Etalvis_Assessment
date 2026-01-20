#include <stdio.h>

int disp_hcf2(int, int);

int main()
{
    int a, b, hcf;

    scanf("%d %d", &a, &b);

    hcf = disp_hcf2(a, b);

    printf("%d", hcf);
    return 0;
}

int disp_hcf2(int a, int b)
{
    int i, min, hcf = 1;

    min = (a < b) ? a : b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
