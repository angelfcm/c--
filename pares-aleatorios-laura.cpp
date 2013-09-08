#include <cstdio>
#include <ctime>
#include <cstdlib>

int main (){
    int lista [10];
    int z = 0;
    srand (time(NULL));
    printf("10 numeros pares: \n");

    for (int i=0; i<10; i++){
        lista [i]= rand ()%199;
        if (lista [i]%2!=0){
            lista [i] += 1;
        }
        z += lista [i];
        printf ("numeros: %i\n",lista [i]);
    }

    printf("la suma es: %i", z);

    return 0;
}
