#include <stdio.h>

int main() {
    int num, i = 2, flag = 0;

    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Prime number\n");
    else
        printf("Not Prime\n");

    return 0;
}
