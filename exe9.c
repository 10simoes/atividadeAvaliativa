#include <stdio.h>

main() {
    
    int voto, candidato1 = 0,candidato2 = 0, candidato3 = 0, candidato4 = 0, votos_nulos = 0, votos_em_branco = 0;

   
    
    do {
        
        printf("\nDigite o codigo do candidato (ou 0 para encerrar): \n");
        scanf("%d", &voto);

        
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            case 0:
                break;
            default:
                printf("\n Codigo invalido. Voto nao contabilizado.\n");
        }
    } while (voto != 0);
    
    

    printf("\nTotal de votos para o Candidato 1: %d\n", candidato1);

    printf("\nTotal de votos para o Candidato 2: %d\n", candidato2);

    printf("\nTotal de votos para o Candidato 3: %d\n", candidato3);

    printf("\nTotal de votos para o Candidato 4: %d\n", candidato4);

    printf("\nTotal de votos nulos: %d\n", votos_nulos);

    printf("\nTotal de votos em branco: %d\n", votos_em_branco);

    
}