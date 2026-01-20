
#include<string.h>
#include<stdio.h>

int main()
{
    int i=0;
    char input[100];
    fgets(input,100,stdin);
    if(strlen(input)>0)
    {
        i=1;
    }
    else 
        i=0;

    int a;
    a=strlen(input);
    for(int j=0;j<a;j++)
    {
        if(input[j]==' ')
        {
            i++;
        } 
    }
printf("%d\n",i);
return 0;
}