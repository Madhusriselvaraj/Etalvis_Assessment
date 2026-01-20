#include <stdio.h>
#include <string.h>

int main() {
    char numStr[51]; 
    int digits[50];  
    int length;

    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", numStr);  

    length = strlen(numStr);

    for (int i = 0; i < length; i++) {
        if (numStr[i] >= '0' && numStr[i] <= '9') {
            digits[i] = numStr[i] - '0'; 
        } else {
            printf("Invalid input! Only digits allowed.\n");
            return 1; 
        }
    }
    printf("Digits in the integer array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
