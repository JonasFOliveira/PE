#include <stdio.h>
int alfabeto(){

    for (int i = 'a' ; i <= 'z' ; i++){
       printf("%c", i);
    }
}

int caracteres(){
    char caracter;
    int i = 0;
    while(caracter != '\n'){
        caracter = getchar();
        if (caracter == '\n')
            break;
        
        i++;
    }
    printf("%d\n", i);
}

int decrescente(){

    int a[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("%d", a[i]);
        if (i >0)
        printf(", ");
    }
}

int frequencia(){
    int a[10];
    int num[10];

    for(int i = 0; i < 10; i++){
        num[i] = 0;
    }

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);

        switch (a[i])
        {
        case 0:
            num[0]++;
            break;
        case 1:
            num[1]++;
            break;
        case 2:
            num[2]++;
            break;
        case 3:
            num[3]++;
            break;
        case 4:
            num[4]++;
            break;
        case 5:
            num[5]++;
            break;
        case 6:
            num[6]++;
            break;
        case 7:
            num[7]++;
            break;
        case 8:
            num[8]++;
            break;
        case 9:
            num[9]++;
            break;
        }
    }

     for(int i = 0; i < 10; i++){
        printf("%d : %d\n", i, num[i]);
    }

}

int frequencia02(){
    int a[10];
    int num[10];

    for(int i = 0; i < 10; i++){
        num[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);

        for (int j = 0; j < 10; j++){
            if (j == a[i]){
                num[j]++;
            }
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d : %d\n", i, num[i]);
    }
}

int frequenciaProf(){
    int a;
    int num[10];

    for(int i = 0; i < 10; i++){
        num[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        scanf("%d", &a);
        num[a]++;
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d : %d\n", i, num[i]);
    }

}

int contarStr(){
    int cont = 0;
    char String[10] = "";

    scanf("%s", String);

    while (*(String+cont) != '\0'){
        cont++;
    }

    printf("%d", cont);
}

int ler_linha(char str[], int n);
int ler_linha(char str[], int n){
    //Created by Igor Malheiros 
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < n-1)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    
    return i;
    
}
int contarSpace(){

    char str[100] = "";
    int n = 100;
    int cont = 0;

    int i = ler_linha(str, n);

    while(i >= 0){
        if(*(str+i) == ' ')
            cont++;
        i--;
    }

    printf("%d \n", cont);
}
void strconcat(char str1[100], char str2[4]);
void strconcat(char str1[100], char str2[4]){
    int n1, n2;
    n1 = n2 = 0;

    for(int i = 0; str1[i]; i++){
        n1++;
    }
    for(int i = 0; str2[i]; i++){
        n2++;
    }

    for(int i = 0; i < n2; i++){
        *(str1+n1+i) = *(str2+i);
    }

}
int concatenacao(){
    char str1[100] = "abc";
    char str2[4] = "def";

    strconcat(str1, str2);
    printf("Result = %s \n", str1);
}
/*
int main(int argc, char *argv[]){

    for (int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}
*/

/*int main(){

   #ifdef __APLLE__
    printf("Mac\n");
    #elif __WINDOWNS__
    printf("Windowns\n");
    #elif __linux__
    printf("linux\n");
    #else
    printf("outro\n");
    #endif
    return 0;
}
*/

int main(){
    return 0;
}