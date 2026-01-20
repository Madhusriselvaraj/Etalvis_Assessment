#include <stdio.h>

void disp_2digit_evensum6(){
    int n = 2, count = 0;

    while (n <= 9) {
        if (n == 2 || n == 3 || n == 5 || n == 7) {
            count++;
        }
        n++;
    }

    printf("%d\n", count);
}
int main()
{
    disp_2digit_evensum6();
}
