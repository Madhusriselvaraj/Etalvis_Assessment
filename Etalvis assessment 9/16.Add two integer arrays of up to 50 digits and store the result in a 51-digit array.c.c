#include <stdio.h>

int main() {
    int a[50], b[50], sum[51];
    int n1, n2, i, carry = 0;

   
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int i1 = n1 - 1;
    int i2 = n2 - 1;
    int k = (n1 > n2 ? n1 : n2);

    for (int i = k; i > 0; i--) {
        int d1 = (i1 >= 0) ? a[i1--] : 0;
        int d2 = (i2 >= 0) ? b[i2--] : 0;

        int s = d1 + d2 + carry;
        sum[i] = s % 10;
        carry = s / 10;
    }

    sum[0] = carry;

  
    if (sum[0] != 0)
        printf("%d", sum[0]);

    for (i = 1; i <= k; i++)
        printf("%d", sum[i]);

    return 0;
}