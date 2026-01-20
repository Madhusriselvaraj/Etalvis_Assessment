#include <stdio.h>

int main() {
    int arr[100];
    int count = 0, sum = 0, num;

    printf("Enter numbers (0 to stop):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        arr[count] = num;
        sum += num;
        count++;
    }

    printf("Total numbers entered: %d\n", count);
    printf("Sum of numbers: %d\n", sum);

    return 0;
}
