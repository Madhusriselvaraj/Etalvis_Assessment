#include <stdio.h>

int main() {
    char num[51];
    int i = 0;

    printf("Enter a number string (up to 50 digits): ");
    scanf("%50s", num);

    
    while (num[i] == '0') {
        i++;
    }

   
    if (num[i] == '\0') {
        printf("Result: 0\n");
    } else {
        printf("Result: %s\n", num + i);
    }

    return 0;
}