#include <stdio.h>

void check_first_last_prime() {
    int num, i = 2, flag = 0,tens,last,a;
    scanf("%d", &num);
    last=num%10;
    tens=num/10%10;
    a=tens*10+last;
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
}
int main()
{
    check_first_last_prime();
}