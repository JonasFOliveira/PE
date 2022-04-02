/*
-- Programação Estruturada --
> Professor Igor Malheiros <

- Tarefa 01

> Autor: Jonas Felipe <
> 20210026948

Problema:  Faça um programa que recebe um número inteiro não negativo n e imprime a
soma dos dígitos que esse número possui. O inteiro n nunca vai possuir mais do
que 9 dígitos.
*/

#include <stdio.h>

int main(){
    int sum = 0, n = 0;
    while(1){
    printf("Insira um numero inteiro não negativo com até 9 algarismos: ");
    scanf("%d", &n);
    if (n < 999999999 && n > -1)
        break;
    }

     while (n > 0){
        sum += n%10;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}