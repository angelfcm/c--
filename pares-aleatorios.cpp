#include <cstdio>
#include <ctime>
#include <cstdlib>

int main ()
{
    int a;
    int x;
    srand(time(NULL));
    for (int x=0; x<10; x++) {
        a = rand() % 115 + 1;
        if(a%2!=0){
            a=a+1;
        }
        printf("%d\n",a);
    }

    return 0;

}
