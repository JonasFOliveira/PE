#include <stdio.h>
#include "Clean.h"
#include "estatistica.h"
#define N 6

int main(){
    int min = 10;
    int max = 0;
    float med = 0;
    int notas[6] = {5,7,8,-5,15,10};

    remove_negativo(notas, N);
    remove_maior_que_dez(notas, N);

    for(int i = 0; i < N; i++){
        printf("%i\t", notas[i]);
    }
    printf("\n");

    max = maxfun(notas, N);
    min = minfun(notas, N);
    med = medfun(notas, N);

    printf("O maior valor eh %d\n", max);
    printf("O menor valor eh %d\n", min);
    printf("A media das notas eh %f\n", med);
    
}