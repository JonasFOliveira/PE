#include <stdio.h>
int palindromo(int arr[]);
int i = 0;
int tamanho = 4; //INSERIR TAMANHO DO ARRAY

int main(){
    int arr[4] = {1,3,3,1};

    if (palindromo(arr) == 1){
        printf("eh palindromo");
    }else{
        printf("não eh palindromo");
    }
    return 0;
}

int palindromo(int arr[]){
    

    if (arr [i] == arr[tamanho-1] && (i < tamanho)){
        i++;
        tamanho--;
        palindromo(arr);

    }else if (arr [i] != arr [tamanho-1] || (arr [i] != arr [tamanho-1])){
        return 0;
    }else if (arr [i] == arr[tamanho-1] && ((i == tamanho) || (i == tamanho+1))){
        return 1;
    }

}