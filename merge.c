#include <stdio.h>
void merge(char *out, char *in1, char *in2);

int len(char *in);

int len(char *in){
    int i = 0;
    while(in[i] != '\0'){
        i++;
    }
    return i;
}

void merge(char *out, char *in1, char *in2){
    int n1, n2;
    n1 = len(in1);
    n2 = len(in2);
    int menor, maior;
    maior = menor = 0;
    int j = 0;

    if (n1 > n2){
        maior = n1;
        menor = n2;

        for(int i = 0; i < menor; i++){
            out[j] = in1[i];
            j++;
            out[j] = in2[i];
            j++;
        }
        for (int i = menor; i < maior; i++){
            out[j] = in1[i];
            j++;
            }
    }
    else if(n2 > n1){
        maior = n2;
        menor = n1;

        for(int i = 0; i < menor; i++){
            out[j] = in1[i];
            j++;
            out[j] = in2[i];
            j++;
        }
        for (int i = menor; i < maior; i++){
            out[j] = in2[i];
            j++;
            }
    }
    else{
        for(int i = 0; i < n1; i++){
            out[j] = in1[i];
            j++;
            out[j] = in2[i];
            j++;
        }
    }
}

int main(int argc, char *argv[]){
    char result[41] = "";

    merge(result, argv[1], argv[2]);
    puts(result);
}
