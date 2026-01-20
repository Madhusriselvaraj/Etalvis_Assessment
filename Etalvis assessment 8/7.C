#include <stdio.h>
int disp_rev_number(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_rev_number(x);
    printf("%d", y);
    return 0;
}

int disp_rev_number(int a)
{
    int temp,rev=0;
    while(a!=0)
    {
      temp=a;
      temp=a%10;
      rev=rev*10+temp;
      a/=10;
    }
   return rev;
}


    
   

