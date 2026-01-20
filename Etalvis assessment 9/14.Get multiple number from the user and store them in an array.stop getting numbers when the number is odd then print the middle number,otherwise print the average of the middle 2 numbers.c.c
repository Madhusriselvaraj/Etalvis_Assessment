#include <stdio.h>

int main() {
    int arr[100], n = 0, temp;

   
    while (1) {
        scanf("%d", &temp);
        if (temp == 0)
            break;
        arr[n++] = temp;
    }

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    if (n % 2 != 0) {
       
        printf("Middle number = %d\n", arr[n / 2]);
    } else {
       
        float avg = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        printf("Average of middle numbers = %.2f\n", avg);
    }

    return 0;
}