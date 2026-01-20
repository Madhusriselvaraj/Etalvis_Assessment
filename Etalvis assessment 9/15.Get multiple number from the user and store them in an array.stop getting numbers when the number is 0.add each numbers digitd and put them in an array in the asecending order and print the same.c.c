#include <stdio.h>

int main() {
    int arr[100], sumArr[100];
    int n, count = 0;

    // Read numbers until 0
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        arr[count++] = n;
    }

    // Find sum of digits
    for (int i = 0; i < count; i++) {
        int num = arr[i];
        if (num < 0) num = -num;   // handle negative numbers

        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        sumArr[i] = sum;
    }

    // Sort in ascending order
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (sumArr[i] > sumArr[j]) {
                int temp = sumArr[i];
                sumArr[i] = sumArr[j];
                sumArr[j] = temp;
            }
        }
    }

    // Print sorted digit sums
    for (int i = 0; i < count; i++) {
        printf("%d ", sumArr[i]);
    }

    return 0;
}
