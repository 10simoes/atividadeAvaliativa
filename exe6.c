#include<stdio.h>

main (){

float x, y;


 printf(" \ncoordenadas do ponto x: \n ");
 scanf("%f",&x);

 printf(" \ncoordenadas do ponto y: \n ");
 scanf("%f",&y);


 

 if (x == 0 && y == 0) {
        printf("\nOrigem\n");
    } else if (x == 0) {
        printf("\nEixo Y\n");
    } else if (y == 0) {
        printf("\nEixo X\n");
    } else if (x > 0 && y > 0) {
        printf("\nQ1\n");
    } else if (x < 0 && y > 0) {
        printf("\nQ2\n");
    } else if (x < 0 && y < 0) {
        printf("\nQ3\n");
    } else if (x > 0 && y < 0) {
        printf("\nQ4\n");
    }

}