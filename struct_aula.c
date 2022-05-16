#include <stdio.h>
typedef struct{
    char nome[100];
    int idade;
    double altura;
} pessoa;



int main(){
    pessoa pessoa1 = {"Maria", 25, 1.65}; 
    pessoa pessoa2 = {"Joao", 30, 1.80};
    pessoa pessoa3 = {.idade = 20, .altura = 1.75, .nome = "Alex"};
    
    scanf("%s", pessoa1.nome);
    scanf("%d", &pessoa1.idade);
    scanf("%lf", &pessoa1.altura);

    printf("%s\n", pessoa1.nome);
    printf("%d\n", pessoa1.idade);
    printf("%lf\n", pessoa1.altura);
}