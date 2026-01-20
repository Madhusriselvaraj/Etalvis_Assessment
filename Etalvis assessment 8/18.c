#include <stdio.h>

int disp_lcm2(int, int);

int main()
{
    int x, y, k;
    scanf("%d %d", &x, &k);

    y = disp_lcm2(x, k);

    printf("%d", y);
    return 0;
}

int disp_lcm2(int a, int b)
{
    int max, lcm;

    max = (a > b) ? a : b;

    for (lcm = max; ; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
    }
    return lcm;
}
