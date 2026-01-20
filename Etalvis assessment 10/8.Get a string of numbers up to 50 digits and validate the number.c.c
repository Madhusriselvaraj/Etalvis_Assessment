#include <stdio.h>

int main() {
    char number[51];
    int valid = 1;

    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", number);  

    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] < '0' || number[i] > '9') {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid number!\n");
    else
        printf("Invalid input! Only digits allowed.\n");

    return 0;
}