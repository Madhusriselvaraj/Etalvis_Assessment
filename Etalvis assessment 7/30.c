#include <stdio.h>

void disp_count_HCF2() {
    int a, b, hcf = 1;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d",hcf);
}
int main()
{
    disp_count_HCF2() ;
}
