#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *str1, char *str2);
int *fill(int n, int v);

int main(int argc, char *argv[]){
    char *str;
    
    int *nums;
    int n = 0;
    int v = 0;


    switch (*argv[1])
    {
    case '1':
        
        str = concat(argv[2], argv[3]);
        puts(str);
        break;
    case '2':
        printf("Insira a quantidade:\t");
        scanf("%d", &n);
        printf("Insira o valor:\t");
        scanf("%d", &v);

        nums = fill(n, v);
        for (int i = 0; i < n; i++){
            printf("%d\t", nums[i]);
        }
        printf("\n");
        break;
    
    default:
        break;
    }
        
    }

char *concat(char *str1, char *str2){
    char *str;
    str = (char *) malloc(strlen(str1)+strlen(str2)+1);
    strcpy(str, str1);
    strcat(str, str2);
    return str;
}

int *fill(int n, int v){
    int *nums;
    nums = (int *) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        nums[i] = v;
    }
    return nums;
}