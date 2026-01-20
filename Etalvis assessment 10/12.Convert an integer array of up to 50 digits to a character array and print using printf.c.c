#include <stdio.h>

int main() {
    int digits[] = {1, 4, 5, 8, 7, 6, 3};   
    int n = sizeof(digits) / sizeof(digits[0]);

    char str[51];   
    for (int i = 0; i < n; i++) {
        str[i] = digits[i] + '0';
    }

    str[n] = '\0';  
    printf("%s", str);

    return 0;
}
