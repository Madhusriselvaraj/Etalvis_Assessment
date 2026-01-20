
#include <stdio.h>
int main()
{
    float a,b;
    char o;
    printf("Enter a number 1 : ");
    scanf("%f",&a);
    printf("Enter a number 2 : ");
    scanf("%f",&b);
    printf("Enter an operator : ");
    scanf("\n %c",&o);
    if(o == '+'){
        printf("sum = %.0f",a+b);
    }
    else if(o == '-')
    {
        printf("difference = %.0f",a-b);
    }
    else if(o == '*')
    {
        printf("product = %.0f",a*b);
    }
    else if(o == '/')
    {
        printf("division = %.1f",a/b);
    }
    else
    {
        printf("invalid");
    }
}
