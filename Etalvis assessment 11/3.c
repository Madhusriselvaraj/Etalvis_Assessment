
/*Write a loop program to print 1 to 5 one by one. Write a function 
and print the result in a main function.*/

#include<stdio.h>
int arrange_ascend(int *p2);
int main()
{
    int*p1,b=0;
    p1=&b;
    for(int i=0;i<5;i++)
    {
        b=arrange_ascend(p1 );
        printf("%d\n",b);
    }
}
int arrange_ascend(int *p2)
{
    *p2=*p2+1;
    return *p2;
}
