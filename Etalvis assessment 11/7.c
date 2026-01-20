
/*Write a function to compare a set of integers.
Print Success or failture*/

#include<stdio.h>
int memcomp(int*q1,int*q2,int size);
 int a1[100],a2[100];
int main()
{
    int b=0,c;
    scanf("%d",&b);
   
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a2[i]);
    }
    int*p1,*p2;
    p1=&a1[0];
    p2=&a2[0];
    c=memcomp(p1,p2,b);
    if(c==0)
    {
        printf("Failure");
    }
    else
    {
       printf("Success");
    }
}int memcomp(int*q1,int*q2,int size)
{
    for(int i=0;i<size;i++)
    {
       if(*q1!=*q2)
       {
         return 0;
       }
    }
    return 1;
   
}
