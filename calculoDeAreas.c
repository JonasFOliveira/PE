#include <stdio.h>

#define pi 3.14

float quadradoArea(float altura);
float circuloArea(float raio);
float cilindroArea(float raio, float altura);
float piramideArea(float alturaQuadrado, float alturaPiramide);



int menu(int i, float altura, float raio, float altQ, float altP){
    printf("-------------------------------------------------------------------\n");
    printf("-------- CALCULE -- AS -- AREAS -- DAS -- FIGURAS -----------------\n");
    printf("-------------------------------------------------------------------\n");
    printf("               Selecione a figura desejada                         \n");
    printf("-------------------------------------------------------------------\n");
    printf("            1 - QUADRADO           2 - CIRCULO                     \n");
    printf("                                                                   \n");
    printf("            3 - CILINDRO         4  - PIRAMIDE                     \n");
    printf("-------------------------------------------------------------------\n");
    printf("Made by Xonas   2022-----------------------------------------------\n");
    printf("-------------------------------------------------------------------\n");
//quadrado, circulo, piramide, cilindro

    scanf("%d", &i);
    switch (i)
    {
    case 1:{
        printf("-------------------------------------------------------------------\n");
        printf("Insira a altura: ");
        scanf("%f", &altura);
        printf("-------------------------------------------------------------------\n");
        printf("Area quadrado: %.2f", quadradoArea(altura));
        break;
    }
    case 2:{
        printf("-------------------------------------------------------------------\n");
        printf("Insira o raio: ");
        scanf("%f", &raio);
        printf("-------------------------------------------------------------------\n");
        printf(" Area do circulo: %.2f", circuloArea(raio));
        break;       
    }
    case 3:{
        printf("-------------------------------------------------------------------\n");
        printf("Insira o raio: ");
        scanf("%f", &raio);
        printf("Insira a Altura: ");
        scanf("%f", &altura);
        printf("-------------------------------------------------------------------\n");
        printf("Area do cilindro: %.2f", cilindroArea(raio, altura));
        break;
    }
    case 4:{
        printf("-------------------------------------------------------------------\n");
        printf("Insira a largura da base: ");
        scanf("%f", &altQ);
        printf("Insira a altura da piramide: ");
        scanf("%f", &altP);
        printf("-------------------------------------------------------------------\n");
        printf(" Area do cilindro: %.2f", piramideArea(altQ, altP));  
        break; 
    }
    default:{
        printf("===================================================================\n");
        printf("Error 101: Unexpected Value\n");
        printf("===================================================================\n");
        break;
        }
    }

   
    
    
}


float quadradoArea(float altura){
    //area = altura ** 2
    return (altura*altura);

}
float circuloArea(float raio){
    //area = pi * raio**2
    return (pi*(raio*raio));

}
float cilindroArea(float raio, float altura){
    //area = area do circulo * altura
    return (circuloArea(raio)*altura);
}
float piramideArea(float alturaQuadrado, float alturaPiramide){
    //area = area do quadrado * altura / 3
    return ((quadradoArea(alturaQuadrado) * alturaPiramide)/3);
}


int main(){
    int escolha = menu(0,0,0,0,0);
}