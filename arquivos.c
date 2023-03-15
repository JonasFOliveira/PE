#include <stdio.h>
#include <stdlib.h>
#define FP1 "arquivo1.txt"
#define FP2 "arquivo2.txt"

int soma_dois_num(){
int n1, n2;
    n1 = n2 = 0;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", n1+n2);
}

int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen(FP1, "r");
    fp2 = fopen(FP2, "a");
    if (fp1 == NULL){
        printf("Não foi possivel abrir o arquivo %s\n", FP1);
        exit(1);
    }
    if (fp2 == NULL){
        printf("Não foi possivel abrir o arquivo %s\n", FP2);
        exit(1);
    }
    while ((ch = getc(fp1)) != EOF)
    {
        putc(ch, fp2);
    }
}

