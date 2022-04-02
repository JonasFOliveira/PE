/*
-- Programação Estruturada --
> Professor Igor Malheiros <

- Tarefa 01

> Autor: Jonas Felipe <
> 20210026948

Problema:  Faça um programa que recebe um número inteiro não negativo n e imprime a
quantidade de dígitos que esse número possui. O inteiro n nunca vai possuir
mais do que 9 dígitos.
*/

#include <stdio.h>

int main(){
    int n = 0, cont = 0;

    while(1){
    printf("Insira um numero inteiro não negativo com até 9 algarismos: ");
    scanf("%d", &n);
    if (n < 1000000000 && n > -1)
        break;
    }

    while(n > 0){
        cont++;
        n/=10;
    }

    printf("%d digitos \n", cont);

}

