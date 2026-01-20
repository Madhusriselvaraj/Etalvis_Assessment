#include <stdio.h>
int disp_sum_all_digit(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_sum_all_digit(x);
    printf("%d", y);
    return 0;
}

int disp_sum_all_digit(int a)
{
    int temp,sum=0;
    while(a!=0)
    {
      temp=a;
      temp=a%10;
      sum+=temp;
      a/=10;
    }
   return sum;
}


    
   

