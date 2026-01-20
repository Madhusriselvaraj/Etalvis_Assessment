/*Write a function to concatenate two strings to another.*/

#include<stdio.h>
#include<string.h>
int c,d;
int strcon(char *q1,char*q2,char*q3);
int main()
{
    char a1[100],a2[100],a3[100];
    char*p1,*p2,*p3;
    p1=a1;
    p2=a2;
    p3=a3;
    fgets(a1,sizeof a1,stdin);
    a1[strcspn(a1,"\n")]='\0';
    fgets(a2,sizeof a2,stdin);
    a2[strcspn(a2,"\n")]='\0';
    c=strlen(a1);
    d=strlen(a2);
    strcon(p1,p2,p3);
}
int strcon(char*q1,char*q2,char*q3)
{char*q4;
    q4=q3;

  for(int i=0;i<c;i++)
  {
    *q3=*q1;
    q3=q3+1;
    q1=q1+1;
  }
  for(int i=c;i<c+d;i++)
  {
    *q3=*q2;
    q3++;
    q2++;

  }
  *q3='\0';
  printf("%s",q4);
  return 0;
}