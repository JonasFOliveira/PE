/*
* int search(int *arr, int n, int v)
*
* arr: Ponteiro para primeira posição do array
* n: Quantidade de elementos na busca
* v: Valor procurado
*
* A função retorna a posição da primeira ocorrência de `v` em `arr` caso ela exista.
* Caso contrário, o retorno é -1.
*/
#include <stdio.h>
int search(int *arr, int n, int v);

int main(){
    int arr[8] = {1, 2, 3, 5, 10, -8, 2, 1};
    printf("%d\n", search(arr, 8, 2));
    // Imprime 1
    printf("%d\n", search(&arr[0], 8, 5));
    // Imprime 3
    printf("%d\n", search(arr + 3, 5, 1));
    // Imprime 4 (O segundo 1 é a quarta posição começando em arr + 3)
    printf("%d\n", search(arr, 8, 4));
    // Imprime -1

}

int search(int *arr, int n, int v){
    for(int i = 0; i < n; i++){
        
        if(*(arr+i) == v){
            return i;
        }
    }
    return -1;
}