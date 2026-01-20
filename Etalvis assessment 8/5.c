#include <stdio.h>
int count_total_digit(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = count_total_digit(x);
    printf("%d", y);
    return 0;
}

int count_total_digit(int a)
{
    int count=0;
    while(a>0)
    {
      a/=10;
      count++;
    }
    return count;
}

    
   

