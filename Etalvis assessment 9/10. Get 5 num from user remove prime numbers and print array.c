#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[5], newArr[5];
    int count = 0;


    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (!isPrime(arr[i])) {
            newArr[count] = arr[i];
            count++;
        }
    }

   
    printf("Array after removing prime numbers:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}