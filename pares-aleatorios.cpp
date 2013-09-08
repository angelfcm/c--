#include <cstdio>
#include <ctime>
#include <conio.h>
#include <stdlib.h>

int main ()
{
    int a;
    int x;
    srand(time(NULL));
    for (int x=0; x<10; x++)
        {
       // x = 1 + rand()% ((115+1) - 1);
        //if(x%2==0)
       // {
            //a=x+1;
        //}
        printf("%d\n",x);
    }
    getch();


    return 0;

}
