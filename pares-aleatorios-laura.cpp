#include <cstdio>
#include <ctime>
#include <cstdlib>

int main (){
int lista [10];

srand (time(NULL));
printf("10 numeros pares: \n");
for (int i=0; i<10; i++){
lista [i]= rand ()%199;
if (lista [i]%2==0){
int z = z + lista [i];
printf ("numeros: %i\n",lista [i]);
}else {
    i--;
}
}
printf("%i la suma es: ", z);
return 0;
}
