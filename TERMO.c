#include <stdio.h>

int main(){
    int letras[26] = {0};
    char TERMO = ' ';
    int maior = 0;

    
// Inserção da frequencia de aparição das letras nas palavras inseridas
    while (TERMO != '\n')
    {
        TERMO = getchar();
        letras[TERMO - 'A']++;
    }
// Verificação de qual foi a maior frequencia de aparição    
    for(int i = 0; i < 26; i++){
        if (letras[i] > maior)
        maior = letras[i];
    }

    printf("Seu palpite deve possuir a(s) letra(s): \n");
// Impressão das maiores frequencias(Index + 'A', sendo 'A' = 65)
    for(int i = 0; i < 26; i++){
        if (letras[i] == maior)
        printf("%c ", i+'A');
    }   

    printf("\n");

    return 0;
}