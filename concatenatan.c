#include <stdio.h>

void strconcat(char *so, char *si);

int main(int argc, char *argv[]){
    char string[101] = "";
    for(int i = 0; i < argc-1; i++){
        strconcat(string, argv[i+1]);
    }
    puts(string);
}

void strconcat(char *so, char *si){
    static int num = 0;
    int i = 0;
    while(si[i] != '\0'){
        i++;
    }
    for(int j = 0; j < i; j++){
        so[num] = si[j];
        num++;
    }


}