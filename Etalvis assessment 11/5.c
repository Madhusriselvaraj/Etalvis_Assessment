
/*Write a function to copy integers from one location to another location.*/

#include<stdio.h>
void memcopy(int*q1,int*q2,int size);
 int a1[100],a2[100];
int main()
{
    int b=0;
    scanf("%d",&b);
   
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a1[i]);
        
    }int*p1,*p2;
    p1=&a1[0];
    p2=&a2[0];
    memcopy(p1,p2,b);
}void memcopy(int*q1,int*q2,int size)
{
    for(int i=0;i<size;i++)
    {
        *q2=*q1;   
        q2++;
        q1++;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",a2[i]);
    }
}
