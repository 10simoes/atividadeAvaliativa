#include <stdio.h>

main(){

double a, b, c;



printf("\n Insira o valor de A:\n");
scanf("%lf", &a);

printf("\n Insira o valor de B:\n");
scanf("%lf" , &b);

printf("\n Insira o valor de C: \n");
scanf("%lf", &c);



if (a + b > c && a + c > b && b + c > a ) {

    if(a*a + b*b == c*c || b*b + c*c == a*a ||  a*a + c*c == b*b){
        printf("\n triangulo retangulo.\n");
    }else if (a*a + b*b < c*c || b*b + c*c < a*a || a*a + c*c < b*b ){
        printf("\n triangulo obtusangulo. \n");
    }else{
        printf("\n trinagulo ocutangulo. \n ");
    }
}else{
    printf("\n esses lados nao forma um triangulo. \n");
}

}