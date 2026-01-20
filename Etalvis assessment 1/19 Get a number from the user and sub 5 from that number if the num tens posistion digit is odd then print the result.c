#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    n = a-5*(((a/10)%10)%2);
    printf("%d",n);

}