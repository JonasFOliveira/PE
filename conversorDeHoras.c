/*
Aluno: Jonas Felipe
Matricula: 20210029648
*/
#include <stdio.h>

int hora( int *segundos, int *minutos, int *horas);

int main(){
   
    int segundos, minutos, horas = 0;

    scanf("%d", &segundos);
    hora(&segundos, &minutos, &horas);

    printf("%d:%d:%d", horas, minutos, segundos);


    return 0;
}

    int hora( int *segundos, int *minutos, int *horas){
    
        
            *horas = *segundos/3600;
            *segundos -= *horas*3600;

            *minutos = *segundos/60;
            *segundos -= *minutos*60;
        

        return 0;        
 
    }
