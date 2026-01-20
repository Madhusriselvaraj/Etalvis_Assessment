
/*Write a function to copy a string to another.*/

#include<stdio.h>
#include<string.h>
void strcopy(char*q1,char*q2); int b,c;
int main()
{
    char a1[100],a2[100];
    char*p1,*p2;
    p1=&a1[0];
    p2=&a2[0];
    fgets(a1,sizeof a1,stdin);
    a1[strcspn(a1,"\n")]='\0';
   
    b=strlen(a1);
    strcopy(p1,p2);
}
void strcopy(char*q1,char*q2)
{
   while(*q1!='\0')
   {
    *q2=*q1;
    q1++;
    q2++;
   }q2=q2-b;
   printf("%s",q2);
}
