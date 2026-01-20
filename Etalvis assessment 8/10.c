#include <stdio.h>
int  disp_singledigit_primenumber(int);
int main()
{
    int x=2, y;
    y =  disp_singledigit_primenumber(x);
    printf("%d", y);
    return 0;
}

int disp_singledigit_primenumber(int a)
{
    int  count = 0;

    while (a <= 9) {
        if (a== 2 || a == 3 || a == 5 || a == 7) {
            count++;
        }
        a++;
    }


    return count;
}




    
   

