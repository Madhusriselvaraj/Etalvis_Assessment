#include <stdio.h>

int main() {
    int num, i = 2, flag = 0,tens,c,a;
    scanf("%d", &num);
    tens=num/10%10;
    c=num/10/10%10;
    a=c*10+tens;
    while (i <= a/ 2) {
        if (a % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Prime \n");
    else
        printf("Not Prime\n");

    return 0;
}
