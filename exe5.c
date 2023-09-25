#include <stdio.h>

main (){

double x1 , x2, y1 , y2, distancia ;



 printf("\nDigite as coordenadas do primeiro ponto (x1 y1):\n ");
 scanf("%lf %lf", &x1, &y1);

 printf("\nDigite as coordenas do segundo pontos (x2 y2):\n");
 scanf("%lf %lf", &x2, &y2);


 distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

 printf("\nA distancia entre os pontos a: %.4lf\n", distancia);

}