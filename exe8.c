#include <stdio.h>

main(){

 double salario, total_salarios = 0, maior_salario = 0;
 int num_filhos, total_filhos = 0, num_pessoas = 0, pessoas_ate_100 = 0;

 

  do {
        
        printf("\nDigite o salario (ou um valor negativo para encerrar): \n");
        scanf("%lf", &salario);

        if (salario >= 0) {
            printf("\n Digite o nemero de filhos: \n");
            scanf("%d", &num_filhos);

            
            total_salarios += salario;
            total_filhos += num_filhos;
            num_pessoas++;

            if (salario <= 100) {
                pessoas_ate_100++;
            }

            if (salario > maior_salario) {
                maior_salario = salario;
            }
        }
    } while (salario >= 0);
   
    if (num_pessoas > 0) {
        double media_salario = total_salarios / num_pessoas;

        double media_filhos = (double) total_filhos / num_pessoas;
        
        double percentual_ate_100 = ((double) pessoas_ate_100 / num_pessoas) * 100;

        
        
        printf("\n a) Media do salario da populacao: %.2lf\n", media_salario);

        printf("\b b) Media do numero de filhos: %.2lf\n", media_filhos);

        printf("\n c) Maior salario: %.2lf\n", maior_salario);

        printf("\n d) Percentual de pessoas com salario atee R$100,00: %.2lf%%\n", percentual_ate_100);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

}