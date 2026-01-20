#include <stdio.h>

int main() {
    int num, i = 2, flag = 0,a,b,sum=0;
    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {

            a=num/10;
            b=num%10;
            flag = 1;
            break;
        }
        i++;
    }
    sum=a+b;
    if (flag == 0&&sum==14)
        printf("Prime & sum of digit is 14");
    else if(flag == 0&&sum!=14)
        printf("Prime & sum of digit is not 14");
    else if(flag!=0&&sum==14)
        printf("Not Prime & sum of digit is 14");
    else if(flag!=0&&sum!=14) 
         printf("Not Prime & sum of digit is not 14");

    
             

    return 0;
}
