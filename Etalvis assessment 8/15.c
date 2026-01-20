#include <stdio.h>

int disp_singledigit_primenumber(int);

int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_singledigit_primenumber(x);
    printf("%d", y);
    return 0;
}

int disp_singledigit_primenumber(int a)
{
    int t, count = 0;

    while (a != 0)
    {
        t = a % 10;
        if (t == 2|| t == 3 || t == 5|| t == 7)
        {
            count++;
        }
        a = a / 10;
    }
    return count;
}
