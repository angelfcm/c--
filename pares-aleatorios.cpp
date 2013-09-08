#include <cstdio>
#include <ctime>
#include <cstdlib>

int main ()
{
    int a;
    int suma = 0;
    srand(time(NULL));
    for (int x=0; x<10; x++) {
        a = rand() % 115 + 1;
        suma += a;
        if(a%2!=0){
            a=a+1;
        }
        printf("%d\n",a);
    }
    printf("SUMA = %i", suma);

    return 0;

}
