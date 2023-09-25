#include <stdio.h>

main(){

    double a, b, c;

    printf("\nDigite o valor de A:\n ");
    scanf("%lf", &a);

    printf("\nDigite o valor de B:\n ");
    scanf("%lf", &b);

    printf("\nDigite o valor de C: \n");
    scanf("%lf", &c);

    if (a + b > c && a + c > b && b + c > a)
    {

        if (a == b && b == c)
        {
            printf("\ne um triangulo equilatero.\n");
        }
        else if (a == b || b == b || a == c)
        {
            printf("\ne um triangulo isosceles.\n");
        }
        else
        {
            printf("\ne um triangulo escaleno.\n");
        }
    }
    else
    {
        printf("\nesses lados nao formam um triangulo.\n");
    }
}