
/*Write a function to compare two strings. Print success or failure.*/

#include<stdio.h>
#include<string.h>
int c,d;
int strcomp(char *q1,char*q2);
int main()
{
    char a1[100],a2[100];
    int b=0;
    char*p1,*p2;
    p1=a1;
    p2=a2;
    fgets(a1,sizeof a1,stdin);
    a1[strcspn(a1,"\n")]='\0';
    fgets(a2,sizeof a2,stdin);
    a2[strcspn(a2,"\n")]='\0';
    c=strlen(a1);
    d=strlen(a2);
    b=strcomp(p1,p2);
    if(b==1)
    {
        printf("Success");

    }
    else
    {
        printf("Failure");
    }

}
int strcomp(char*q1,char*q2)
{
  if(c!=d)
  {
     return 0;
  }
  else
  {
    for(int i=0;i<c;i++)
    {
        if(*q1!=*q2)
        {
          return 0;
        }
        q1++;
        q2++;
    }return 1;
  }

}
