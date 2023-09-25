#include<stdio.h>


main(){
    
    int codigo, acidentes, total_veiculos = 0;
    int total_acidentes = 0;
    int menor_acidentes = -1; 
    int maior_acidentes = -1;
    int total_cidades = 0;
    int total_cidades_RS = 0;
    char estado[3];

     
    for(int i = 0; i < 200; i++) {
        
        printf("\nDigite o codigo da cidade (ou -1 para encerrar):\n ");
        scanf("%d", &codigo);

        if (codigo == -1) {
            break;
        }

        printf("\nDigite o estado da cidade: \n");
        scanf("%s", estado);

        int veiculos;
        printf("\nDigite o numero de veiculos de passeio em 1992:\n ");
        scanf("%d", &veiculos);

        printf("\nDigite o numero de acidentes de transito com vitimas em 1992:\n ");
        scanf("%d", &acidentes);

        
        total_veiculos += veiculos;
        total_acidentes += acidentes;

        
        if (estado[0] == 'R' && estado[1] == 'S') {
            total_cidades_RS++;
        }

        
        if (menor_acidentes == -1 || acidentes < menor_acidentes) {
            menor_acidentes = acidentes;
        }

        if (acidentes > maior_acidentes) {
            maior_acidentes = acidentes;
        }
    }

    
    if (total_cidades > 0) {
        double media_veiculos = (double) total_veiculos / total_cidades;
        double media_acidentes_RS = (double) total_acidentes / total_cidades_RS;

        
     

        printf("\na) Maior indice de acidentes de transito: %d\n", maior_acidentes);

        printf("\n  Menor indice de acidentes de transito: %d\n", menor_acidentes);

        printf("\nb) Media de veiculos nas cidades brasileiras: %.2lf\n", media_veiculos);

        printf("\nc) Media de acidentes com vitimas no Rio Grande do Sul: %.2lf\n", media_acidentes_RS);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

   
}
