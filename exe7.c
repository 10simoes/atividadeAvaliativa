#include <stdio.h>

main(){

 int num_alunos = 30;
 double notas[num_alunos][3];
 double media_aluno, media_geral = 0;

 

 for(int i = 0; i < num_alunos; i++) {
        printf("\n Digite as tres notas do aluno %d (separadas por espaco): \n", i+1);
        scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);

        media_aluno = (notas[i][0]*2 + notas[i][1]*4 + notas[i][2]*3) / 10;
        printf("\nMedia do aluno %d: %.2lf\n", i+1, media_aluno);

        media_geral += media_aluno;

        

        if (media_aluno >= 7.0) {
            printf("\nAprovado\n");
        } else {
            printf("\n Reprovado\n");
        }
    }
   
     media_geral /= num_alunos;
     printf("Media geral da turma: %.2lf\n", media_geral);





}