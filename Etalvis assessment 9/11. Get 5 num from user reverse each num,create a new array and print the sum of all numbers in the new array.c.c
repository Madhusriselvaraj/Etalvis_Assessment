#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int arr[5], newArr[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        newArr[i] = reverseNumber(arr[i]);
        sum += newArr[i];
    }

    printf("Sum of reversed numbers: %d\n", sum);

    return 0;
}
