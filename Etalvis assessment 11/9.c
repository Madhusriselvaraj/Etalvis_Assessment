/*Write a function to concatenate two integer arrays into a single array.*/

#include<stdio.h>
void intcon(int*q1,int size1,int*q2,int size2,int*q3);
 int a1[100],a2[100],a3[100];
int main()
{
    int b=0,a=0;
    scanf("%d",&a);
    scanf("%d",&b);
   
    for(int i=0;i<a;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a2[i]);
    }
    int*p1,*p2,*p3;
    p1=&a1[0];
    p2=&a2[0];
    p3=&a3[0];
    intcon(p1,a,p2,b,p3);
}void intcon(int*q1,int size1,int*q2,int size2,int*q3)
{int *q4;
    q4=q3;
    for(int i=0;i<size1+size2;i++)
    {
       if(i<size1)
       {
         *q3=*q1;
         q3++;
         q1++;
       }
       else
       {
          *q3=*q2;
          q3++;
          q2++;
       }
    }//q3=size1-size2;
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d ",q4[i]);
    }
}