#include <stdio.h>

int main() {
    int arr[20], n;


    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= 10) {
            arr[i + 1] += arr[i] / 10;
            arr[i] = arr[i] % 10;
        }
    }

   
    if (arr[n - 1] >= 10) {
        arr[n] = arr[n - 1] / 10;
        arr[n - 1] = arr[n - 1] % 10;
        n++;
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}