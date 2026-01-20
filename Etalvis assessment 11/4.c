/*Write a function to find the two-digit odd numbers whose 
sum of digits is 7. Print the results in main function.*/

#include<stdio.h>
int find_2digit_odd_sum7(int *p2);
int main()
{
    int*p1,b=0,i;
    p1=&i;
    for(i=11;i<100;i+=2)
    {
        b=find_2digit_odd_sum7(p1);
        if(b==1)
        {
          printf("%d\n",i);
        }
    
    }
}
int find_2digit_odd_sum7(int *p2)
{
   // printf("%d ",*p2);
    int c=0,d=0;
    c=*p2%10;
    d=*p2/10;
    if(c+d==7)
    {
        return 1;
    }else
    {
        return 0;
    }
}