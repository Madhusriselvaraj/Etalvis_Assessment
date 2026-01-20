
//get number and change the value indirect

#include<stdio.h>
#include<string.h>
int main()
{
    int*p;
    int a;
    scanf("%d",&a);
    p=&a;
    *p=*p+1;
    printf("%d",a);

}
