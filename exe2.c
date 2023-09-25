#include<stdio.h>

 main() {
    float altura_chico = 1.50;  
    float altura_ze = 1.10;     
    int anos = 0;               

    while (altura_ze <= altura_chico) {
        altura_chico += 0.02; 
        altura_ze += 0.03;    
        anos++;
    }

    printf("\nSerão necessários %d anos para que Zé seja mais alto que Chico.\n", anos);

    
}
