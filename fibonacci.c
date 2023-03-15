#include <stdio.h>
#include <stdlib.h>

int *fibonacci(int num);

int main(){
    int a = 0;
    int *fibbo;

    printf("Insira a quantidade de elementos:  ");
    scanf("%d", &a);

    fibbo = fibonacci(a);
    
    for (int i = 0; i<a; i++){
        printf("%d ", *(fibbo+i));
    }
    printf("\n");
    
}

int *fibonacci(int num){
    int *N;
    N = (int *) malloc(num*sizeof(int));
    N[0] = 1;
    N[1] = 1;
    
    int cout = 2;
    do{
        N[cout] = N[cout-1] + N[cout-2];
        cout++;
    }
    while(cout < num);
    return N;
}