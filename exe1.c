#include<stdio.h>


 main() {
    double x;

    printf("\nDigite o valor de x: \n");
    scanf("%lf", &x);

    
    if (x >= 4) {
        
        double resultado = (5 * x + 3) / sqrt(x * x - 16);

        
        printf("\nO valor de fx e: %lf\n", resultado);
    } else {
        printf("\n valor de x deve ser maior ou igual a 4 para que a função seja definida.\n");
    }

    
}