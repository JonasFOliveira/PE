/*

####### Programação Estruturada ########
       Professor: Igor Malheiros
----------------------------------------
* Aluno: Jonas Felipe da Fonseca Oliveira
* Matricula: 20210026948

*/

#include <stdio.h>

int main(){
    
    int letras[26] = {0};
    int maior = 0;
    char TERMO = ' ';
    
    // Insercao da frequencia de aparição de letras nas palavras inseridas
    while(TERMO != '\n'){
        TERMO = getchar();
        letras[TERMO - 'A']++;
    }
    
    // Verificacao da maior frequencia
    for(int i = 0; i < 26; i++){
        if (letras[i] > maior)
        maior = letras[i];
    }

    // Apresentação dos resultados
    printf("Seu palpite deve conter a(s) letra(s): \n");
    for(int i = 0; i < 26; i++){
        if (letras[i] == maior)
            printf("%c  ", i+'A');
    }

    return 0;
}
