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

int main(){

    caracteres();   
    return 0;
}