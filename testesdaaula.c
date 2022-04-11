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
int main(){

    frequencia02();
    return 0;
}