#include <stdio.h>

int disp_lcm3(int, int, int);

int main()
{
    int a, b, c, lcm;

    scanf("%d %d %d", &a, &b, &c);

    lcm = disp_lcm3(a, b, c);

    printf("%d", lcm);
    return 0;
}

int disp_lcm3(int a, int b, int c)
{
    int max, lcm;

    // find maximum of three numbers
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    for (lcm = max; ; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            break;
        }
    }
    return lcm;
}
